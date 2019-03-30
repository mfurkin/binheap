/*
 * ArrayCreationTestCase.cpp
 *
 *  Created on: 28 мар. 2019 г.
 *      Author: mikhailf
 */

#include "ArrayCreationTestCase.h"

ArrayCreationTestCase::ArrayCreationTestCase():CreationTestCase("Array creation test") {
	// TODO Auto-generated constructor stub

}

ArrayCreationTestCase::ArrayCreationTestCase(const std::string& aTestName):CreationTestCase(aTestName) {
}

ArrayCreationTestCase::~ArrayCreationTestCase() {
}

void ArrayCreationTestCase::doTest() {
	std::vector<int> vec = {1,2,3,4,5,6,7};
	heap_ptr = new BinHeap<int>(vec);
}

int ArrayCreationTestCase::checkResult() {
	int result = 0;
	if (heap_ptr) {
		int sum = 0;
		try {
			result = 1;
			result = (heap_ptr->getMaxElem() == 7);
			sum = calcSum(1,3,*heap_ptr);
			result = (sum == 11);
			if (result) {
				sum = calcSum(3,7,*heap_ptr);
				result = (sum == 10);
			}
			heap_ptr->printHeap();
		} catch(std::out_of_range& oor) {
			result = 0;
		} catch(EmptyHeapException& ex) {
			result = 0;
		}
	}
	return result;
}


