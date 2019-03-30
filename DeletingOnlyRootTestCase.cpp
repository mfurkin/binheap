/*
 * DeletingOnlyRootTestCase.cpp
 *
 *  Created on: 30 мар. 2019 г.
 *      Author: mikhailf
 */

#include "DeletingOnlyRootTestCase.h"

DeletingOnlyRootTestCase::DeletingOnlyRootTestCase():DeletingTestCase("Deleting root only heap test case",{1},1,0,-1,-1,0) {

}

DeletingOnlyRootTestCase::~DeletingOnlyRootTestCase() {
}

int DeletingOnlyRootTestCase::checkResult() {
	return checkEmptyHeap();
}
