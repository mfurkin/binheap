/*
 * AddingTestCase.h
 *
 *  Created on: 30 мар. 2019 г.
 *      Author: mikhailf
 */

#ifndef ADDINGTESTCASE_H_
#define ADDINGTESTCASE_H_

#include "BinaryHeapTestCase.h"

class AddingTestCase: public BinaryHeapTestCase {
public:
	AddingTestCase(const std::vector<int>& aVect, int anElem, int aSum1, int aSum2);
	AddingTestCase(const std::string& testName, const std::vector<int>& aVect, int anElem, int aSum1, int aSum2);
	virtual ~AddingTestCase();
private:
	std::vector<int> vect;
	int elem,sum1,sum2;
	virtual int checkResult();
protected:
	virtual void doTest();
};

#endif /* ADDINGTESTCASE_H_ */
