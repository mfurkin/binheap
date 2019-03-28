/*
 * BinaryHeapTest.h
 *
 *  Created on: 28 мар. 2019 г.
 *      Author: mikhailf
 */

#ifndef BINARYHEAPTEST_H_
#include "ArrayCreationTestCase.h"
#include "CopyCreationTestCase.h"
#include "EmptyCreationTestCase.h"
class BinaryHeapTest {
	enum {ARRAY_CREATION_TEST=0,COPY_CREATION_TEST,EMPTY_CREATION_TEST};
	enum{TOTAL_TESTS_QTY=3};
public:
	BinaryHeapTest();
	virtual ~BinaryHeapTest();
/*
	void test_creation_from_array();
	void test_creation_empty();
	void test_creation__copy();
	void test_adding_elem_max();
	void test_adding_elem_mid();
	void test_adding_elem_last();
	void test_elem_found();
	void test_elem_not_found();
	void test_find_from_empty();
	void test_delete_from_empty();
	void test_extract_from_empty();
	void test_get_max_from_empty();
*/
	void testsCreation();
	void testAll();
private:
	void createCreationTests();
	BinaryHeapTestCase** testCases;
	int count;
	int curIndex;
};


#endif /* BINARYHEAPTEST_H_ */
