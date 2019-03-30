/*
 * DeletingOnlyRootTestCase.h
 *
 *  Created on: 30 мар. 2019 г.
 *      Author: mikhailf
 */

#ifndef DELETINGONLYROOTTESTCASE_H_
#define DELETINGONLYROOTTESTCASE_H_

#include "DeletingTestCase.h"

class DeletingOnlyRootTestCase: public DeletingTestCase {
public:
	DeletingOnlyRootTestCase();
	virtual ~DeletingOnlyRootTestCase();
private:
	int checkResult();
};

#endif /* DELETINGONLYROOTTESTCASE_H_ */
