/*
 * BinaryHeapTestCase.cpp
 *
 *  Created on: 28 мар. 2019 г.
 *      Author: mikhailf
 */

#include "BinaryHeapTestCase.h"



BinaryHeapTestCase::BinaryHeapTestCase(const std::string& aTestName):testName(aTestName),heap_ptr(NULL),result(0) {
}

BinaryHeapTestCase::~BinaryHeapTestCase() {
}

void BinaryHeapTestCase::doTest() {
}

void BinaryHeapTestCase::test() {
	startingTest();
	result = 1;
	try {
		doTest();
	} catch(std::exception& e) {
		result = 0;
	}
	result = checkResult();
	assert(result);
	std::cout<<testName<<"  test passed\n";
}

int BinaryHeapTestCase::checkResult() {
	return 0;
}

void BinaryHeapTestCase::startingTest() {
	std::cout<<testName<<" test started\n";
}
int BinaryHeapTestCase::calcSum(int firstIndex, int lastIndex,BinHeap<int>& heap) {
	int result = 0,i;
	for (i=firstIndex;i<lastIndex;)
		result += heap.getElem(i++);
	return result;
}
int BinaryHeapTestCase::checkHeap(int maxValue, int firstIndex, int lastIndex,
		int length, int sum1, int sum2) {
	int result = 0;
	if (heap_ptr) {
		int sum = 0;
		try {
			result = 1;
			result = (heap_ptr->getMaxElem() == maxValue);
			sum = calcSum(firstIndex,lastIndex,*heap_ptr);
			result = (sum == sum1);
			if (result) {
				sum = calcSum(lastIndex,length,*heap_ptr);
				result = (sum == sum2);
			}
			heap_ptr->printHeap();
		} catch(std::out_of_range& oor) {
			result = 0;
		} catch(EmptyHeapException& ex) {
			result = 0;
		}
	}
	return result;
}

int BinaryHeapTestCase::checkEmptyHeap() {
	int result = 0;
	if (heap_ptr) {
		int maxElem;
		try {
			maxElem = heap_ptr->getMaxElem();
			std::cout<<"Strange, we got max elem"<<maxElem<<"\n";
		} catch(EmptyHeapException& ex) {
			result = 1;
		}
	}
	return result;
}

int BinaryHeapTestCase::checkOnlyRootHeap() {
	try {
		result = (heap_ptr->pullMaxElem() == 1);
	} catch (EmptyHeapException& ex) {
		result = 0;
	}
	try {
		heap_ptr->pullMaxElem();
		result = 0;
	} catch (EmptyHeapException& ex) {
		result = 1;
	}
	return result;
}
