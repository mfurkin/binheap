/*
 * DeletingFromEmptyTestCase.h
 *
 *  Created on: 30 мар. 2019 г.
 *      Author: mikhailf
 */

#ifndef DELETINGFROMEMPTYTESTCASE_H_
#define DELETINGFROMEMPTYTESTCASE_H_

#include "DeletingTestCase.h"

class DeletingFromEmptyTestCase: public DeletingTestCase {
public:
	DeletingFromEmptyTestCase();
	virtual ~DeletingFromEmptyTestCase();
protected:
	void doTest();
private:
	int checkResult();
};

#endif /* DELETINGFROMEMPTYTESTCASE_H_ */
