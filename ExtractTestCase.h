/*
 * ExtractTestCase.h
 *
 *  Created on: 30 мар. 2019 г.
 *      Author: mikhailf
 */

#ifndef EXTRACTTESTCASE_H_
#define EXTRACTTESTCASE_H_

#include "BinaryHeapTestCase.h"

class ExtractTestCase: public BinaryHeapTestCase {
public:
	ExtractTestCase(const std::string& aTestName, const std::vector<int>& aVector, int anExpectedValue);
	virtual ~ExtractTestCase();
protected:
	void doTest();
private:
	int checkResult();
	std::vector<int> vec;
	int expectedValue;
};

#endif /* EXTRACTTESTCASE_H_ */
