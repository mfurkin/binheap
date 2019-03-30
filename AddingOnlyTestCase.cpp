/*
 * AddingOnlyTestCase.cpp
 *
 *  Created on: 30 мар. 2019 г.
 *      Author: mikhailf
 */

#include "AddingOnlyTestCase.h"

AddingOnlyTestCase::AddingOnlyTestCase():AddingTestCase{"Adding only root test case",{},1,0,0} {
}

AddingOnlyTestCase::~AddingOnlyTestCase() {
}

int AddingOnlyTestCase::checkResult() {
	return checkOnlyRootHeap();
}

