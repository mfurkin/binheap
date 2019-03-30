/*
 * ArrayCreationTestCase.h
 *
 *  Created on: 28 мар. 2019 г.
 *      Author: mikhailf
 */

#ifndef ARRAYCREATIONTESTCASE_H_
#define ARRAYCREATIONTESTCASE_H_

#include "CreationTestCase.h"

class ArrayCreationTestCase: public CreationTestCase {
public:
	ArrayCreationTestCase();
	ArrayCreationTestCase(const std::string& aTestName);
	virtual ~ArrayCreationTestCase();
protected:
	void doTest();
private:
	int checkResult();
};



#endif /* ARRAYCREATIONTESTCASE_H_ */
