/*
 * AddingTestCase.cpp
 *
 *  Created on: 30 мар. 2019 г.
 *      Author: mikhailf
 */

#include "AddingTestCase.h"

AddingTestCase::AddingTestCase(const std::vector<int>& aVect, int anElem, int aSum1, int aSum2):BinaryHeapTestCase("Adding test case"),vect(aVect),
																	elem(anElem),sum1(aSum1),sum2(aSum2) {
}

AddingTestCase::AddingTestCase(const std::string& aTestName, const std::vector<int>& aVect, int anElem, int aSum1,
								int aSum2):BinaryHeapTestCase(aTestName),vect(aVect),elem(anElem),sum1(aSum1),
											sum2(aSum2) {
}

AddingTestCase::~AddingTestCase() {
}

int AddingTestCase::checkResult() {
	return checkHeap(7,1,3,7,sum1,sum2);
}



void AddingTestCase::doTest() {
	heap_ptr = new BinHeap<int>(vect);
	heap_ptr->addElem(elem);
}

