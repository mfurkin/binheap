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
#include "RootOnlyCreationTestCase.h"
#include "AddingMaxTestCase.h"
#include "AddingMidTestCase.h"
#include "AddingLastTestCase.h"
#include "AddingOnlyTestCase.h"
#include "DeletingMaxTestCase.h"
#include "DeletingMidTestCase.h"
#include "DeletingLastTestCase.h"
#include "DeletingOnlyRootTestCase.h"
#include "DeletingFromEmptyTestCase.h"
#include "DeletingOutOfRangeTestCase.h"
class BinaryHeapTest {
	enum {ARRAY_CREATION_TEST=0,COPY_CREATION_TEST,EMPTY_CREATION_TEST,ROOT_ONLY_CREATION_TEST,
		  ADDING_ELEM_MAX_TEST,ADDING_ELEM_MID_TEST,ADDING_ELEM_LAST_TEST,ADDING_ONLY_ELEM_TEST,
		  DELETING_ELEM_MAX_TEST,DELETING_ELEM_MID_TEST,DELETING_ELEM_LAST_TEST,DELETING_ONLY_ROOT_TEST,
		  DELETING_FROM_EMPTY_TEST,DELETING_OUT_OF_RANGE_TEST};
	enum{TOTAL_TESTS_QTY=20};
public:
	BinaryHeapTest();
	virtual ~BinaryHeapTest();
/*
	void test_adding_elem_max();
	void test_adding_elem_mid();
	void test_adding_elem_last();
	void test_adding_only_elem();
	void test_delete_elem_max();
	void test_delete_elem_mid();
	void test_delete_elem_last();
	void test delete_only_root();
	void test_delete_from_empty();
	void test_elem_found();
	void test_elem_not_found();
	void test_find_from_empty();
	void test_extract();
	void test_extract_from_empty();
	void_test_get_max();
	void test_get_max_from_empty();
*/
	void testsCreation();
	void testsAdding();
	void testsDeleting();
	void testAll();
private:
	void createCreationTests();
	void createAddingTests();
	void createDeletingTests();
	BinaryHeapTestCase** testCases;
	int count;
	int curIndex;
};


#endif /* BINARYHEAPTEST_H_ */
