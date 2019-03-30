/*
 * binheap.h
 *
 *  Created on: 27 мар. 2019 г.
 *      Author: mikhailf
 */

#ifndef BINHEAP_H_
#define BINHEAP_H_
#include <iostream>
#include <vector>
// #include <exception>
#include <stdexcept>
#include "basebinheap.h"
#include "EmptyHeapException.h"
template <class T> class BinHeap : public BaseBinHeap {
public:
	BinHeap();
	BinHeap(const std::vector<T>& anArray);
	BinHeap(const BinHeap& aHeap);
	virtual ~BinHeap();
	void addElem(T& newElem);
	void deleteElem(int index);
	T getElem(size_t index);
	int findElem(T& elem);
	T pullMaxElem();
	T getMaxElem();
	void printHeap();
void heapSort(std::vector<T>& aVector);
private:
	std::vector<T> array;
	void checkHeap();
	void swap(T& t1, T& t2);
	void buildHeap(std::vector<T>& aVector);
	void sift_up(int index);
//	int getMaxIndex(std::vector<T>& aVector, int i1, int i2, int length);
	void heapify(std::vector<T>& aVector, int length, int index);
	int findElemIndex(T& elem, int index, int length);
	void checkChild(std::vector<T>& aVector, int childIndex, int length, int& maxIndex);
	void logHeap(std::vector<T>& aVector);
};

template<class T>
inline BinHeap<T>::BinHeap():array() {
}

template<class T>
inline BinHeap<T>::BinHeap(const std::vector<T>& anArray):array(anArray) {
	buildHeap(array);
}

template<class T>
inline BinHeap<T>::BinHeap(const BinHeap& aHeap):array(aHeap.array) {
}

template<class T>
inline BinHeap<T>::~BinHeap() {
}

template<class T>
inline void BinHeap<T>::sift_up(int index) {
	int i,j;
	for (i = index;getParentAndCheck(i,j) && array[j]<array[i];) {
			swap(array[j], array[i]);
			i = j;
		}
}
template<class T>
inline void BinHeap<T>::addElem(T& newElem) {
	array.push_back(newElem);
	sift_up(array.size() - 1);
}

template<class T>
inline void BinHeap<T>::deleteElem(int index) {
	int i,j;
	array[index] = array[0];
	array[index]++;
	sift_up(index);
	pullMaxElem();
}

template<class T>
inline T BinHeap<T>::pullMaxElem() {
	checkHeap();
	T result = array[0];
	array.erase(array.begin());
	array[0] = array[array.size()-1];
	heapify(array,0);
	return result;
}

template<class T>
inline void BinHeap<T>::heapify(std::vector<T>& aVector, int length, int index) {

	int maxIndex = index;

	checkChild(aVector,left(index),length,maxIndex);
	checkChild(aVector,right(index),length,maxIndex);


	if (maxIndex != index) {
		swap(aVector[index],aVector[maxIndex]);
		heapify(aVector,length,maxIndex);
	}
}

template<class T>
inline void BinHeap<T>::heapSort(std::vector<T>& aVector) {
	int i;
	if (!(aVector.empty())) {
		buildHeap(aVector);
		for (i=aVector.size();i--;) {
			swap(aVector[0],aVector[i]);
			heapify(aVector,i,0);
		}
	}
}

template<class T>
inline void BinHeap<T>::buildHeap(std::vector<T>& aVector) {
	int length,lastItem,i;
	if (!(aVector.empty())) {
		length = aVector.size();
		lastItem = length>>1;
		for (i=lastItem;i--;)
			heapify(aVector,length,i);
	}
}

template<class T>
inline T BinHeap<T>::getElem(size_t index) {
	checkHeap();
	if ((index< 0) || (index>=array.size()))
		throw std::out_of_range("Binary heap index out of range!");
	return array[index];
}

template<class T>
inline int BinHeap<T>::findElem(T& elem) {
	return (array.empty()) ? -1 : findElemIndex(elem,0,array.size());
}

template<class T>
inline int BinHeap<T>::findElemIndex(T& elem, int index, int length) {
	int result;
	if (index <= length)
		result = -1;
	else
		if (array[index] == elem)
			result = index;
		else
			if (array[index] < elem)
				result = -1;
			else {
				int leftIndex,rightIndex;
				result = max(findElemIndex(elem,left(index)),findElemIndex(elem,right(index)));
			}
	return result;
}

template<class T>
inline void BinHeap<T>::printHeap() {
	logHeap(array);
}

template<class T>
inline void BinHeap<T>::swap(T& t1, T& t2) {
	T d;
	d = t1;
	t1 = t2;
	t2 = d;
}

template<class T>
inline T BinHeap<T>::getMaxElem() {
	checkHeap();
	return array[0];
}

template<class T>
inline void BinHeap<T>::checkHeap() {
	if (array.empty())
		throw EmptyHeapException();
}

template<class T>
inline void BinHeap<T>::checkChild(std::vector<T>& aVector, int childIndex, int length, int& maxIndex) {
	if ((childIndex < length) && (aVector[maxIndex] < aVector[childIndex]))
		maxIndex = childIndex;
}


template<class T>
inline void BinHeap<T>::logHeap(std::vector<T>& aVector) {
	int i,length = aVector.size();
		if (aVector.empty())
			std::cout<<"Heap is empty!\n";
		else
			for (i=0;i<length;) {
				std::cout<<aVector[i++]<<"  ";
		}
		std::cout<<"\n";
}

#endif /* BINHEAP_H_ */
