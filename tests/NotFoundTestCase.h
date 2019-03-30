/*
 * NotFoundTestCase.h
 *
 *  Created on: 30 мар. 2019 г.
 *      Author: mikhailf
 */

#ifndef NOTFOUNDTESTCASE_H_
#define NOTFOUNDTESTCASE_H_

#include "NegativeFindingTestCase.h"

class NotFoundTestCase: public NegativeFindingTestCase {
public:
	NotFoundTestCase(const std::string& aTestName, int aFound);
	virtual ~NotFoundTestCase();
};

#endif /* NOTFOUNDTESTCASE_H_ */
