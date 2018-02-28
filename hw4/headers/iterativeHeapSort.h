#ifndef ITERATIVE_HEAP_SORT
#define ITERATIVE_HEAP_SORT
#include <vector>
using namespace std;

int heapMax(vector<int> *vect);

int Parent(int i);

int Left(int i);

int Right(int i);

void maxHeapify(vector<int> *vect, int i,int heapSize);

void buildMaxHeap(vector<int> *vect, int i,int heapSize);

void iterativeHeapSort(vector<int> *vect);

#endif
