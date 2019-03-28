/*
 * BinaryHeapTest.h
 *
 *  Created on: 28 мар. 2019 г.
 *      Author: mikhailf
 */

#ifndef BINARYHEAPTEST_H_
# include <cassert>
class BinaryHeapTest {
public:
	BinaryHeapTest();
	virtual ~BinaryHeapTest();
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
	void testAll();
};


#endif /* BINARYHEAPTEST_H_ */
