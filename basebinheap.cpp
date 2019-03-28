/*
 * BaseBinHeap.cpp
 *
 *  Created on: 27 мар. 2019 г.
 *      Author: mikhailf
 */

#include "basebinheap.h"


BaseBinHeap::BaseBinHeap() {

}

int BaseBinHeap::getParentAndCheck(int index, int& result) {
	int res = index;
	result = (index-1)>>1;
	return res;
}

BaseBinHeap::~BaseBinHeap() {

}

int BaseBinHeap::left(int index) {
	return nextGen(index) + LEFT;
}

int BaseBinHeap::right(int index) {
	return nextGen(index) + RIGHT;
}

int BaseBinHeap::nextGen(int index) {
	return index<<1;
}
