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

vector<int> maxHeapify(MyArray myArray, int i);

vector<int> buildMaxHeap(MyArray myArray, int i);

vector<int> heapSort(MyArray myArray);

#endif
