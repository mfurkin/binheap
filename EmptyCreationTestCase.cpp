/*
 * EmptyCreationTest.cpp
 *
 *  Created on: 28 мар. 2019 г.
 *      Author: mikhailf
 */

#include "EmptyCreationTestCase.h"


EmptyCreationTestCase::EmptyCreationTestCase():CreationTestCase("Empty creation test") {
}

EmptyCreationTestCase::~EmptyCreationTestCase() {
}

int EmptyCreationTestCase::checkResult() {
	int result = 0;
	if (heap_ptr) {
		int maxElem;
		try {
			maxElem = heap_ptr->getMaxElem();
			std::cout<<"Strange, we got max elem"<<maxElem<<"\n";
		} catch(EmptyHeapException& ex) {
			result = 1;
		}
	}
	return result;
}

void EmptyCreationTestCase::doTest() {
	heap_ptr = new BinHeap<int>();
}

