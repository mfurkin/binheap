/*
 * DeletingFromEmptyTestCase.cpp
 *
 *  Created on: 30 мар. 2019 г.
 *      Author: mikhailf
 */

#include "DeletingFromEmptyTestCase.h"

DeletingFromEmptyTestCase::DeletingFromEmptyTestCase():DeletingTestCase("Deleting from empty heap test case",{},0,0,-1,-1,0) {
}

DeletingFromEmptyTestCase::~DeletingFromEmptyTestCase() {
}

int DeletingFromEmptyTestCase::checkResult() {
	return result;
}

void DeletingFromEmptyTestCase::doTest() {
	try {
		result = 0;
		DeletingTestCase::doTest();
	} catch (EmptyHeapException& ex) {
		result = 1;
	}
}
