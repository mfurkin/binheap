/*
 * CraetionTestCase.h
 *
 *  Created on: 28 мар. 2019 г.
 *      Author: mikhailf
 */

#ifndef CREATIONTESTCASE_H_
#define CREATIONTESTCASE_H_

#include "BinaryHeapTestCase.h"



class CreationTestCase: public BinaryHeapTestCase {
public:
	CreationTestCase(const std::string& aTestName);
	virtual ~CreationTestCase();
private:
	int checkResult();
};


#endif /* CREATIONTESTCASE_H_ */
