/*
 * NegativeGetElemTestCase.cpp
 *
 *  Created on: 30 мар. 2019 г.
 *      Author: mikhailf
 */

#include "NegativeGetElemTestCase.h"

NegativeGetElemTestCase::NegativeGetElemTestCase(const std::string& aTestName, const std::vector<int>& aVector,int anExpectedValue,
													int anIndex):BinaryHeapTestCase(aTestName),vec(aVector),
													expectedValue(anExpectedValue),index(anIndex) {
}

NegativeGetElemTestCase::~NegativeGetElemTestCase() {
}

void NegativeGetElemTestCase::doTest() {
	heap_ptr = new BinHeap<int>(vec);
	try {
		result = heap_ptr->getElem(index);
	} catch(EmptyHeapException& ex) {
		result = -1;
	} catch(std::out_of_range& ex2) {
		result = -2;
	} catch(std::exception& ex3) {
		result = -3;
	}
}

int NegativeGetElemTestCase::checkResult() {
	return (result == expectedValue);
}
