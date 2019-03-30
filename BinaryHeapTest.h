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
	enum{TOTAL_TESTS_QTY=7};
public:
	BinaryHeapTest();
	virtual ~BinaryHeapTest();
/*
	void test_adding_elem_max();
	void test_adding_elem_mid();
	void test_adding_elem_last();
	void test_adding_only_elem();
	void test_elem_found();
	void test_elem_not_found();
	void test_find_from_empty();
	void test_delete_from_empty();
	void test_extract_from_empty();
	void test_get_max_from_empty();
*/
	void testsCreation();
	void testsAdding();
	void testAll();
private:
	void createCreationTests();
	void createAddingTests();
	BinaryHeapTestCase** testCases;
	int count;
	int curIndex;
};


#endif /* BINARYHEAPTEST_H_ */
