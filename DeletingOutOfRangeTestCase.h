/*
 * DeletingOutOfRangeTestCase.h
 *
 *  Created on: 30 мар. 2019 г.
 *      Author: mikhailf
 */

#ifndef DELETINGOUTOFRANGETESTCASE_H_
#define DELETINGOUTOFRANGETESTCASE_H_

#include "DeletingTestCase.h"

class DeletingOutOfRangeTestCase: public DeletingTestCase {
public:
	DeletingOutOfRangeTestCase();
	virtual ~DeletingOutOfRangeTestCase();
protected:
	void doTest();
private:
	int checkResult();
};

#endif /* DELETINGOUTOFRANGETESTCASE_H_ */
