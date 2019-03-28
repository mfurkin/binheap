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
}

void BinaryHeapTest::testAll() {
	testsCreation();
}

void BinaryHeapTest::createCreationTests() {
	testCases[ARRAY_CREATION_TEST] = new ArrayCreationTestCase();
	testCases[COPY_CREATION_TEST] = new CopyCreationTestCase();
	testCases[EMPTY_CREATION_TEST] = new EmptyCreationTestCase();
}
