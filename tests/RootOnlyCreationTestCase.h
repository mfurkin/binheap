/*
 * RootOnlyCreationTestCase.h
 *
 *  Created on: 30 мар. 2019 г.
 *      Author: mikhailf
 */

#ifndef ROOTONLYCREATIONTESTCASE_H_
#define ROOTONLYCREATIONTESTCASE_H_

#include "CreationTestCase.h"

class RootOnlyCreationTestCase: public CreationTestCase {
public:
	RootOnlyCreationTestCase();
	virtual ~RootOnlyCreationTestCase();
private:
	virtual int checkResult();
protected:
	virtual void doTest();
};


#endif /* ROOTONLYCREATIONTESTCASE_H_ */
