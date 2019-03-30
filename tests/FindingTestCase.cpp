/*
 * FindingTest.cpp
 *
 *  Created on: 30 мар. 2019 г.
 *      Author: mikhailf
 */

#include "FindingTestCase.h"

FindingTestCase::FindingTestCase(const std::vector<int>& aVector, int aFound, int anExpResult1, int anExpResult2):BinaryHeapTestCase("Finding test case"),vec(aVector),found(aFound),
								exp_result1(anExpResult1),exp_result2(anExpResult2) {
}

FindingTestCase::FindingTestCase(const std::string& aTestName, const std::vector<int>& aVector, int aFound, int anExpResult1, int anExpResult2):BinaryHeapTestCase(aTestName),vec(aVector),found(aFound),
								exp_result1(anExpResult1), exp_result2(anExpResult2) {
}

FindingTestCase::~FindingTestCase() {
}

void FindingTestCase::doTest() {
	heap_ptr = new BinHeap<int>(vec);
	result = heap_ptr->findElem(found);
}



int FindingTestCase::checkResult() {
	return (result > exp_result1) && (result < exp_result2);
}
