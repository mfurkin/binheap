/*
 * RootOnlyCreationTestCase.cpp
 *
 *  Created on: 30 мар. 2019 г.
 *      Author: mikhailf
 */

#include "RootOnlyCreationTestCase.h"

RootOnlyCreationTestCase::RootOnlyCreationTestCase():CreationTestCase("Root only creation test case") {
}

RootOnlyCreationTestCase::~RootOnlyCreationTestCase() {
}

int RootOnlyCreationTestCase::checkResult() {
	return result;
}

void RootOnlyCreationTestCase::doTest() {
	std::vector<int> vec = {1};
	heap_ptr = new BinHeap<int>(vec);
	try {
			result = (heap_ptr->pullMaxElem() == 1);
	} catch (EmptyHeapException& ex) {
		result = 0;
	}
	try {
		heap_ptr->pullMaxElem();
		result = 0;
	} catch (EmptyHeapException& ex) {
		result = 1;
	}
}
