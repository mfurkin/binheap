/*
 * NotFoundTestCase.cpp
 *
 *  Created on: 30 мар. 2019 г.
 *      Author: mikhailf
 */

#include "NotFoundTestCase.h"

NotFoundTestCase::NotFoundTestCase(const std::string& aTestName, int aFound):NegativeFindingTestCase(aTestName,{16,12,10,8,6,4,2},aFound) {
}

NotFoundTestCase::~NotFoundTestCase() {
}

