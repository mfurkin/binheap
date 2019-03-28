/*
 * BinaryHeapTestCase.h
 *
 *  Created on: 28 мар. 2019 г.
 *      Author: mikhailf
 */

#ifndef BINARYHEAPTESTCASE_H_
#define BINARYHEAPTESTCASE_H_

#include <cassert>
#include <iostream>
#include <string>
#include "binheap.h"

class BinaryHeapTestCase {
public:
	BinaryHeapTestCase(const std::string& aTestName);
	virtual ~BinaryHeapTestCase();
	void test();
	void startingTest();
private:
	virtual int checkResult();
protected:
	virtual void doTest();
	std::string testName;
	int result;
};


#endif /* BINARYHEAPTESTCASE_H_ */
