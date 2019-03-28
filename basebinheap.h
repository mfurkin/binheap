/*
 * BaseBinHeap.h
 *
 *  Created on: 27 мар. 2019 г.
 *      Author: mikhailf
 */

#ifndef BASEBINHEAP_H_
#define BASEBINHEAP_H_



class BaseBinHeap {
	enum {LEFT = 1, RIGHT = 2};
public:
	BaseBinHeap();
	virtual ~BaseBinHeap();
protected:
	int getParentAndCheck(int index, int& result);
	int left(int index);
	int right(int index);
private:
	int nextGen(int index);
};



#endif /* BASEBINHEAP_H_ */
