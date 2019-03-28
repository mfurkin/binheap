/*
 * EmptyHeapException.h
 *
 *  Created on: 28 мар. 2019 г.
 *      Author: mikhailf
 */

#ifndef EMPTYHEAPEXCEPTION_H_
#define EMPTYHEAPEXCEPTION_H_

#include <bits/exception.h>


class EmptyHeapException: public std::exception {
public:
	EmptyHeapException();
	virtual ~EmptyHeapException();
};



#endif /* EMPTYHEAPEXCEPTION_H_ */
