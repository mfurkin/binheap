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
protected:
	int calcSum(int firstIndex, int LastIndex, BinHeap<int>& heap);
	BinHeap<int>* heap_ptr;
};


#endif /* CREATIONTESTCASE_H_ */
