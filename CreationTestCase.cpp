/*
 * CraetionTestCase.cpp
 *
 *  Created on: 28 мар. 2019 г.
 *      Author: mikhailf
 */

#include "CreationTestCase.h"



CreationTestCase::CreationTestCase(const std::string& aTestName):BinaryHeapTestCase(aTestName) {
}

CreationTestCase::~CreationTestCase() {
	if (heap_ptr)
		delete heap_ptr;
}

int CreationTestCase::checkResult() {
	return checkHeap(7,1,3,7,11,10);
}
