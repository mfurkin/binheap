/*
 * NegativeGetElemTestCase.h
 *
 *  Created on: 30 мар. 2019 г.
 *      Author: mikhailf
 */

#ifndef NEGATIVEGETELEMTESTCASE_H_
#define NEGATIVEGETELEMTESTCASE_H_

#include "BinaryHeapTestCase.h"

class NegativeGetElemTestCase: public BinaryHeapTestCase {
public:
	NegativeGetElemTestCase(const std::string& aTestName, const std::vector<int>& aVector, int anExpectedValue,
							int anIndex);
	virtual ~NegativeGetElemTestCase();
protected:
	void doTest();
private:
	int checkResult();
	std::vector<int> vec;
	int expectedValue,index;
};

#endif /* NEGATIVEGETELEMTESTCASE_H_ */
