/*
 * AddingOnlyTestCase.h
 *
 *  Created on: 30 мар. 2019 г.
 *      Author: mikhailf
 */

#ifndef ADDINGONLYTESTCASE_H_
#define ADDINGONLYTESTCASE_H_

#include "AddingTestCase.h"

class AddingOnlyTestCase: public AddingTestCase {
public:
	AddingOnlyTestCase();
	virtual ~AddingOnlyTestCase();
private:
	virtual int checkResult();
};

#endif /* ADDINGONLYTESTCASE_H_ */
