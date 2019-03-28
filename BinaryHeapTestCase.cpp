/*
 * BinaryHeapTestCase.cpp
 *
 *  Created on: 28 мар. 2019 г.
 *      Author: mikhailf
 */

#include "BinaryHeapTestCase.h"



BinaryHeapTestCase::BinaryHeapTestCase(const std::string& aTestName):testName(aTestName),result(0) {
}

BinaryHeapTestCase::~BinaryHeapTestCase() {
}

void BinaryHeapTestCase::doTest() {
}

void BinaryHeapTestCase::test() {
	doTest();
	startingTest();
	result = checkResult();
	assert(result);
	std::cout<<testName<<"  test passed\n";
}

int BinaryHeapTestCase::checkResult() {
	return 0;
}

void BinaryHeapTestCase::startingTest() {
	std::cout<<testName<<" test started\n";
}
