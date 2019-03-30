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

int CreationTestCase::calcSum(int firstIndex, int lastIndex,BinHeap<int>& heap) {
	int result = 0,i;
	for (i=firstIndex;i<lastIndex;)
		result += heap.getElem(i++);
	return result;
}
