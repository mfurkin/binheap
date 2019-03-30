/*
 * GetMaxTestCase.h
 *
 *  Created on: 30 мар. 2019 г.
 *      Author: mikhailf
 */

#ifndef GETMAXTESTCASE_H_
#define GETMAXTESTCASE_H_

#include "BinaryHeapTestCase.h"

class GetMaxTestCase: public BinaryHeapTestCase {
public:
	GetMaxTestCase(const std::string& aTestName, const std::vector<int>& aVector, int anExpectedValue);
	virtual ~GetMaxTestCase();
protected:
	void doTest();
private:
	std::vector<int> vec;
	int expectedValue;
	int checkResult();
};

#endif /* GETMAXTESTCASE_H_ */
