/*
 * DeletingOutOfRangeTestCase.cpp
 *
 *  Created on: 30 мар. 2019 г.
 *      Author: mikhailf
 */

#include "DeletingOutOfRangeTestCase.h"

DeletingOutOfRangeTestCase::DeletingOutOfRangeTestCase():DeletingTestCase("Deleting out of range test case",{7,6,5,4,3,2,1},7,10,-1,-1,7) {
}

DeletingOutOfRangeTestCase::~DeletingOutOfRangeTestCase() {
}

void DeletingOutOfRangeTestCase::doTest() {
	try {
		result = 0;
		DeletingTestCase::doTest();
	} catch(std::out_of_range& ex) {
		result = 1;
	}
}

int DeletingOutOfRangeTestCase::checkResult() {
	return result;
}
