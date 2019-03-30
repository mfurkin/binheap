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
	return checkEmptyHeap();
}

void EmptyCreationTestCase::doTest() {
	heap_ptr = new BinHeap<int>();
}

