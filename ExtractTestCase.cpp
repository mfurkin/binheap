/*
 * ExtractTestCase.cpp
 *
 *  Created on: 30 мар. 2019 г.
 *      Author: mikhailf
 */

#include "ExtractTestCase.h"

ExtractTestCase::ExtractTestCase(const std::string& aTestName, const std::vector<int>& aVector, int anExpectedValue):BinaryHeapTestCase(aTestName),
								vec(aVector),expectedValue(anExpectedValue) {
}

ExtractTestCase::~ExtractTestCase() {
}

void ExtractTestCase::doTest() {
	heap_ptr = new BinHeap<int>(vec);
	try {
		result = heap_ptr->pullMaxElem();
	} catch(EmptyHeapException& ex) {
		result = -1;
	} catch(std::exception& ex2) {
		result = -2;
	}
}

int ExtractTestCase::checkResult() {
	return (result == expectedValue);
}
