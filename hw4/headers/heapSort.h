#ifndef HEAP_SORT
#define HEAP_SORT
#include <vector>
#include "MyArray.h"
using namespace std;

int heapMax(MyArray myArray);

int heapExtractMax(MyArray myArray);

void maxHeapInsert(MyArray myArray, int key);

int Parent(int i);

int Left(int i);

int Right(int i);

void maxHeapify(MyArray myArray, int i);

void buildMaxHeap(MyArray myArray, int i);

void heapSort(MyArray myArray);

#endif
