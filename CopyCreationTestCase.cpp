/*
 * CopyCreationTestCase.cpp
 *
 *  Created on: 28 мар. 2019 г.
 *      Author: mikhailf
 */

#include "CopyCreationTestCase.h"



CopyCreationTestCase::CopyCreationTestCase():ArrayCreationTestCase("Copy creation test") {
}

CopyCreationTestCase::~CopyCreationTestCase() {
}

void CopyCreationTestCase::doTest() {
	BinHeap<int>* ptr;
	ArrayCreationTestCase::doTest();
	ptr = new BinHeap<int>(*heap_ptr);
	delete heap_ptr;
	heap_ptr = ptr;
}


