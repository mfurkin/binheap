/*
 * CopyCreationTestCase.h
 *
 *  Created on: 28 мар. 2019 г.
 *      Author: mikhailf
 */

#ifndef COPYCREATIONTESTCASE_H_
#define COPYCREATIONTESTCASE_H_

#include "ArrayCreationTestCase.h"

class CopyCreationTestCase: public ArrayCreationTestCase {
public:
	CopyCreationTestCase();
	virtual ~CopyCreationTestCase();
private:
	void doTest();
};

#endif /* COPYCREATIONTESTCASE_H_ */
