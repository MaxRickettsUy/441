#ifndef HEAP_SORT
#define HEAP_SORT
#include <vector>
using namespace std;

int heapMax(vector<int> *vect);

int Parent(int i);

int Left(int i);

int Right(int i);

void maxHeapify(vector<int> *vect, int i,int heapSize);

void buildMaxHeap(vector<int> *vect, int i,int heapSize);

void heapSort(vector<int> *vect);

#endif
