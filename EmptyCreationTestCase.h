/*
 * EmptyCreationTest.h
 *
 *  Created on: 28 мар. 2019 г.
 *      Author: mikhailf
 */

#ifndef EMPTYCREATIONTESTCASE_H_
#define EMPTYCREATIONTESTCASE_H_

#include "CreationTestCase.h"


class EmptyCreationTestCase: public CreationTestCase {
public:
	EmptyCreationTestCase();
	virtual ~EmptyCreationTestCase();
private:
	virtual int checkResult();
protected:
	virtual void doTest();
};


#endif /* EMPTYCREATIONTESTCASE_H_ */
