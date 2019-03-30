/*
 * NegativeFindingTestCase.h
 *
 *  Created on: 30 мар. 2019 г.
 *      Author: mikhailf
 */

#ifndef NEGATIVEFINDINGTESTCASE_H_
#define NEGATIVEFINDINGTESTCASE_H_

#include "FindingTestCase.h"

class NegativeFindingTestCase: public FindingTestCase {
public:
	NegativeFindingTestCase(const std::string& aTestName, const std::vector<int>& aVector, int aFound);
	virtual ~NegativeFindingTestCase();
private:
	int checkResult();
};

#endif /* NEGATIVEFINDINGTESTCASE_H_ */
