/*
 * NegativeFindingTestCase.cpp
 *
 *  Created on: 30 мар. 2019 г.
 *      Author: mikhailf
 */

#include "NegativeFindingTestCase.h"

NegativeFindingTestCase::NegativeFindingTestCase(const std::string& aTestName, const std::vector<int>& aVector, int aFound):FindingTestCase(aTestName, aVector,aFound,-1,-1) {
}

NegativeFindingTestCase::~NegativeFindingTestCase() {
}

int NegativeFindingTestCase::checkResult() {
	return (result == -1);
}
