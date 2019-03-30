/*
 * GetMaxTestCase.cpp
 *
 *  Created on: 30 мар. 2019 г.
 *      Author: mikhailf
 */

#include "GetMaxTestCase.h"

GetMaxTestCase::GetMaxTestCase(const std::string& aTestName, const std::vector<int>& aVector, int anExpectedValue):BinaryHeapTestCase(aTestName),
								vec(aVector),expectedValue(anExpectedValue) {
}

GetMaxTestCase::~GetMaxTestCase() {
}

void GetMaxTestCase::doTest() {
	heap_ptr = new BinHeap<int>(vec);
	try {
		result = heap_ptr->getMaxElem();
	} catch(EmptyHeapException& ex) {
		result = -1;
	} catch(std::exception& ex2) {
		result = -2;
	}
}

int GetMaxTestCase::checkResult() {
	return result == expectedValue;
}
