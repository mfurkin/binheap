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
#include "FindingInEmptyTestCase.h"
#include "FindingMaxTestCase.h"
#include "FindingMidTestCase.h"
#include "FindingLastTestCase.h"
#include "NotFoundMaxTestCase.h"
#include "NotFoundMidTestCase.h"
#include "NotFoundLastTestCase.h"
#include "ExtractTestCase.h"
#include "GetMaxTestCase.h"
class BinaryHeapTest {
	enum {ARRAY_CREATION_TEST=0,COPY_CREATION_TEST,EMPTY_CREATION_TEST,ROOT_ONLY_CREATION_TEST,
		  ADDING_ELEM_MAX_TEST,ADDING_ELEM_MID_TEST,ADDING_ELEM_LAST_TEST,ADDING_ONLY_ELEM_TEST,
		  DELETING_ELEM_MAX_TEST,DELETING_ELEM_MID_TEST,DELETING_ELEM_LAST_TEST,DELETING_ONLY_ROOT_TEST,
		  DELETING_FROM_EMPTY_TEST,DELETING_OUT_OF_RANGE_TEST,FOUND_MAX_TEST,FOUND_MID_TEST,FOUND_LAST_TEST,
		  NOT_FOUND_MAX_TEST,NOT_FOUND_MID_TEST,NOT_FOUND_LAST_TEST,FINDING_IN_EMPTY_TEST,EXTRACT_POSITIVE_TEST,
		  EXTRACT_FROM_EMPTY_TEST,GET_MAX_POSITIVE_TEST,GET_MAX_FROM_EMPTY_TEST};
	enum{TOTAL_TESTS_QTY=30};
public:
	BinaryHeapTest();
	virtual ~BinaryHeapTest();
/*
	void_test_get_max();
	void test_get_max_from_empty();
	void test_get_elem_out_of_range();
*/
	void testsMaxGetting();
	void testsExtracting();
	void testsCreation();
	void testsAdding();
	void testsDeleting();
	void testsFinding();
	void testAll();
private:
	void createCreationTests();
	void createAddingTests();
	void createDeletingTests();
	void createFindingTests();
	void createExtractingTests();
	void createMaxGettingTests();
	BinaryHeapTestCase** testCases;
	int count;
	int curIndex;
};


#endif /* BINARYHEAPTEST_H_ */
