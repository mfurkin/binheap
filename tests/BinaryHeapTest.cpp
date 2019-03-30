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
	createDeletingTests();
	createFindingTests();
	createExtractingTests();
	createMaxGettingTests();
	createGetElemTests();
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
	testsDeleting();
	testsFinding();
	testsExtracting();
	testsMaxGetting();
	testsGetElem();
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

void BinaryHeapTest::testsDeleting() {
	testCases[DELETING_ELEM_MAX_TEST]->test();
	testCases[DELETING_ELEM_MID_TEST]->test();
	testCases[DELETING_ELEM_LAST_TEST]->test();
	testCases[DELETING_ONLY_ROOT_TEST]->test();
	testCases[DELETING_FROM_EMPTY_TEST]->test();
	testCases[DELETING_OUT_OF_RANGE_TEST]->test();
}

void BinaryHeapTest::createAddingTests() {
	std::vector<int> vec1 = {11,2,3,4,5,6};
//	int elem1 = 7;
	testCases[ADDING_ELEM_MAX_TEST] = new AddingMaxTestCase();
	testCases[ADDING_ELEM_MID_TEST] = new AddingMidTestCase();
	testCases[ADDING_ELEM_LAST_TEST] = new AddingLastTestCase();
	testCases[ADDING_ONLY_ELEM_TEST] = new AddingOnlyTestCase();
}

void BinaryHeapTest::testsFinding() {
	testCases[FOUND_MAX_TEST]->test();
	testCases[FOUND_MID_TEST]->test();
	testCases[FOUND_LAST_TEST]->test();
	testCases[NOT_FOUND_MAX_TEST]->test();
	testCases[NOT_FOUND_MID_TEST]->test();
	testCases[NOT_FOUND_LAST_TEST]->test();
	testCases[FINDING_IN_EMPTY_TEST]->test();
}

void BinaryHeapTest::createDeletingTests() {
	testCases[DELETING_ELEM_MAX_TEST] = new DeletingMaxTestCase();
	testCases[DELETING_ELEM_MID_TEST] = new DeletingMidTestCase();
	testCases[DELETING_ELEM_LAST_TEST] = new DeletingLastTestCase();
	testCases[DELETING_ONLY_ROOT_TEST] = new DeletingOnlyRootTestCase();
	testCases[DELETING_FROM_EMPTY_TEST] = new DeletingFromEmptyTestCase();
	testCases[DELETING_OUT_OF_RANGE_TEST] = new DeletingOutOfRangeTestCase();
}

void BinaryHeapTest::testsExtracting() {
	testCases[EXTRACT_POSITIVE_TEST]->test();
	testCases[EXTRACT_FROM_EMPTY_TEST]->test();
}

void BinaryHeapTest::createFindingTests() {
	std::vector<int> vec = {16,12,10,8,6,4,2};
	testCases[FOUND_MAX_TEST] = new FindingMaxTestCase();
	testCases[FOUND_MID_TEST] = new FindingMidTestCase();
	testCases[FOUND_LAST_TEST] = new FindingLastTestCase();
	testCases[NOT_FOUND_MAX_TEST] = new NotFoundMaxTestCase();
	testCases[NOT_FOUND_MID_TEST] = new NotFoundMidTestCase();
	testCases[NOT_FOUND_LAST_TEST] = new NotFoundLastTestCase();
	testCases[FINDING_IN_EMPTY_TEST] = new FindingInEmptyTestCase();
}

void BinaryHeapTest::testsMaxGetting() {
	testCases[GET_MAX_POSITIVE_TEST]->test();
	testCases[GET_MAX_FROM_EMPTY_TEST]->test();
}

void BinaryHeapTest::createExtractingTests() {
	testCases[EXTRACT_POSITIVE_TEST] = new ExtractTestCase("Positive extracting test",{1,2,3,4,5,6,7},7);
	testCases[EXTRACT_FROM_EMPTY_TEST] = new ExtractTestCase("Extract from empty heap test",{},-1);
}

void BinaryHeapTest::testsGetElem() {
	testCases[GET_ELEM_FROM_EMPTY_TEST]->test();
	testCases[GET_ELEM_OUT_OF_RANGE_TEST]->test();
}

void BinaryHeapTest::createMaxGettingTests() {
	testCases[GET_MAX_POSITIVE_TEST] = new GetMaxTestCase("Positive get max test",{1,2,3,4,5,6,7},7);
	testCases[GET_MAX_FROM_EMPTY_TEST] = new GetMaxTestCase("Get max from empty test",{},-1);
}

void BinaryHeapTest::createGetElemTests() {
	testCases[GET_ELEM_FROM_EMPTY_TEST] = new NegativeGetElemTestCase("Get elem from empty heap test case",{},-1,0);
	testCases[GET_ELEM_OUT_OF_RANGE_TEST] = new NegativeGetElemTestCase("Get elem out of range test case",{1,2,3,4,5,6,7},-2,10);
}
