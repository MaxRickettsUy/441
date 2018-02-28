#include "../headers/heapSort.h"

int heapMax(vector<int> *vect){
  return (*vect)[0];
}

int Parent(int i){
  return i/2;
}

int Left(int i){
  return (2*i + 1);
}

int Right(int i){
  return ((2*i) + 2);
}

void maxHeapify(vector<int> *vect, int i, int heapSize){
  int left = Left(i); //index of left child node of i
  int right = Right(i); //index of right child node of i
  int largest = i;
  if(left <= (heapSize - 1) && ((*vect)[left] > (*vect)[i])){
    largest = left;
  }
  if(right <= (heapSize - 1) && ((*vect)[right] > (*vect)[largest])){
    largest = right;
  }
  if(largest != i){
    int temp = (*vect)[i];
    (*vect)[i] = (*vect)[largest];
    (*vect)[largest] = temp;
    maxHeapify(vect,largest,heapSize);
  }
}

void buildMaxHeap(vector<int> *vect,int heapSize){
  int i = (*vect).size()/2;
  while(i >= 0){
    maxHeapify(vect,i,heapSize);
    i -= 1;
  }
}

void heapSort(vector<int> *vect){
  int heapSize = (*vect).size();
  buildMaxHeap(vect,heapSize);
  int i = (*vect).size()-1; //index of last element in array
  while(i >= 0){
    int temp = (*vect)[0];
    (*vect)[0] = (*vect)[i]; //move smallest element to top of heap
    (*vect)[i] = temp;     //move heapMax to end of heap
    heapSize = heapSize - 1; //decrease heapSize
    maxHeapify(vect,0,heapSize);
    i-=1;
  }
}
