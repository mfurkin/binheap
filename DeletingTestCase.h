/*
 * DeletingTestCase.h
 *
 *  Created on: 30 мар. 2019 г.
 *      Author: mikhailf
 */

#ifndef DELETINGTESTCASE_H_
#define DELETINGTESTCASE_H_

#include "BinaryHeapTestCase.h"

class DeletingTestCase: public BinaryHeapTestCase {
public:
	DeletingTestCase(const std::vector<int>& aVector, int aMaxValue, int anIndex, int aSum1, int aSum2, int aLength);
	DeletingTestCase(const std::string& aTestName, const std::vector<int>& aVector, int aMaxValue, int anIndex, int aSum1, int aSum2, int aLength);
	virtual ~DeletingTestCase();
protected:
	void doTest();
private:
	int checkResult();
	std::vector<int> vec;
	int maxValue,sum1,sum2,length,index;
};

#endif /* DELETINGTESTCASE_H_ */
