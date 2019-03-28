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
	std::vector<int> vec = {1,2,3};
	heap_ptr = new BinHeap<int>(vec);
}

int ArrayCreationTestCase::checkResult() {
	int result = 0;
	if (heap_ptr) {
		std::vector<int> vec = {3,2,1};
		int i,len,cur_i;
		try {
			result = 1;
			len  = vec.size();
			for(i=0;i<len;i++) {
				cur_i = heap_ptr->getElem(i);
				if (cur_i != vec[i]) {
					result = 0;
					break;
				}
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


