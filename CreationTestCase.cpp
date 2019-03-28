/*
 * CraetionTestCase.cpp
 *
 *  Created on: 28 мар. 2019 г.
 *      Author: mikhailf
 */

#include "CreationTestCase.h"



CreationTestCase::CreationTestCase(const std::string& aTestName):BinaryHeapTestCase(aTestName),heap_ptr(NULL) {
}

CreationTestCase::~CreationTestCase() {
	if (heap_ptr)
		delete heap_ptr;
}


