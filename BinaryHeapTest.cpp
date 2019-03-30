/*
 * BinaryHeapTest.cpp
 *
 *  Created on: 28 мар. 2019 г.
 *      Author: mikhailf
 */

#include "BinaryHeapTest.h"


BinaryHeapTest::BinaryHeapTest():count(TOTAL_TESTS_QTY),curIndex(0) {
	testCases = new BinaryHeapTestCase* [count];
	createCreationTests();
	createAddingTests();
}

BinaryHeapTest::~BinaryHeapTest() {
	if (testCases)
		delete [] testCases;
}

void BinaryHeapTest::testsCreation() {
	std::cout<<"Creation tests started\n";
	testCases[ARRAY_CREATION_TEST]->test();
	testCases[COPY_CREATION_TEST]->test();
	testCases[EMPTY_CREATION_TEST]->test();
	testCases[ROOT_ONLY_CREATION_TEST]->test();
}

void BinaryHeapTest::testAll() {
	testsCreation();
	testsAdding();
}

void BinaryHeapTest::createCreationTests() {
	testCases[ARRAY_CREATION_TEST] = new ArrayCreationTestCase();
	testCases[COPY_CREATION_TEST] = new CopyCreationTestCase();
	testCases[EMPTY_CREATION_TEST] = new EmptyCreationTestCase();
	testCases[ROOT_ONLY_CREATION_TEST] = new RootOnlyCreationTestCase();
}

void BinaryHeapTest::testsAdding() {
	testCases[ADDING_ELEM_MAX_TEST]->test();
	testCases[ADDING_ELEM_MID_TEST]->test();
	testCases[ADDING_ELEM_LAST_TEST]->test();
	testCases[ADDING_ONLY_ELEM_TEST]->test();
}

void BinaryHeapTest::createAddingTests() {
	std::vector<int> vec1 = {11,2,3,4,5,6};
//	int elem1 = 7;
	testCases[ADDING_ELEM_MAX_TEST] = new AddingMaxTestCase();
	testCases[ADDING_ELEM_MID_TEST] = new AddingMidTestCase();
	testCases[ADDING_ELEM_LAST_TEST] = new AddingLastTestCase();
	testCases[ADDING_ONLY_ELEM_TEST] = new AddingOnlyTestCase();
}
