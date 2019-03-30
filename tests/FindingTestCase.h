/*
 * FindingTest.h
 *
 *  Created on: 30 мар. 2019 г.
 *      Author: mikhailf
 */

#ifndef FINDINGTESTCASE_H_
#define FINDINGTESTCASE_H_

#include "BinaryHeapTestCase.h"

class FindingTestCase: public BinaryHeapTestCase {
public:
	FindingTestCase(const std::vector<int>& aVector, int aFound, int anExpResult1, int anExpResult2);
	FindingTestCase(const std::string& aTestName, const std::vector<int>& aVector, int aFound, int anExpResult1, int anExpResult2);
	virtual ~FindingTestCase();
protected:
	virtual void doTest();
private:
	virtual int checkResult();
	std::vector<int> vec;
	int found,exp_result1,exp_result2;
};

#endif /* FINDINGTESTCASE_H_ */
