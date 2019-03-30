/*
 * DeletingTestCase.cpp
 *
 *  Created on: 30 мар. 2019 г.
 *      Author: mikhailf
 */

#include "DeletingTestCase.h"

DeletingTestCase::DeletingTestCase(const std::vector<int>& aVector, int aMaxValue, int anIndex, int aSum1, int aSum2,
								   int aLength):BinaryHeapTestCase("Deleting elem test case"),vec(aVector),
								   	   	   	   	   maxValue(aMaxValue),sum1(aSum1),sum2(aSum2),length(aLength),
												   index(anIndex) {
}

DeletingTestCase::DeletingTestCase(const std::string& aTestName,
		const std::vector<int>& aVector, int aMaxValue, int anIndex, int aSum1,
		int aSum2, int aLength):BinaryHeapTestCase(aTestName),vec(aVector),
	   	   	   	   maxValue(aMaxValue),sum1(aSum1),sum2(aSum2),length(aLength),
				   index(anIndex) {
}

DeletingTestCase::~DeletingTestCase() {
}

int DeletingTestCase::checkResult() {
	return checkHeap(maxValue,1,3,length,sum1,sum2);
}

void DeletingTestCase::doTest() {
	heap_ptr = new BinHeap<int>(vec);
	heap_ptr->deleteElem(index);
}

