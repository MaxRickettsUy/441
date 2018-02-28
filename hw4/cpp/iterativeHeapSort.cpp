#include "../headers/iterativeHeapSort.h"
#include <iostream>

int iheapMax(vector<int> *vect){
  return (*vect)[0];
}

int iParent(int i){
  return i/2;
}

int iLeft(int i){
  return (2*i + 1);
}

int iRight(int i){
  return ((2*i) + 2);
}

void imaxHeapify(vector<int> *vect, int i, int heapSize){
  int largest = i;
  while(largest < heapSize){
    int l = iLeft(i);
    int r = iRight(i);
    if(l <= heapSize-1 && (*vect)[l] > (*vect)[i]){
      largest = l;
    }
    if(r <= heapSize-1 && (*vect)[r] > (*vect)[largest]){
      largest = r;
    }

    if(largest != i){
      int temp = (*vect)[i];
      (*vect)[i] = (*vect)[largest];
      (*vect)[largest] = temp;
      i = largest;
    }
    else{
      break;
    }
  }

}

void ibuildMaxHeap(vector<int> *vect,int heapSize){
  int i = (*vect).size()/2;
  while(i >= 0){
    imaxHeapify(vect,i,heapSize);
    i -= 1;
  }
}

void iterativeHeapSort(vector<int> *vect){
  int heapSize = (*vect).size();
  ibuildMaxHeap(vect,heapSize);
  int i = (*vect).size()-1; //index of last element in array
  while(i >= 0){
    int temp = (*vect)[0];
    (*vect)[0] = (*vect)[i]; //move smallest element to top of heap
    (*vect)[i] = temp;     //move heapMax to end of heap
    heapSize = heapSize - 1; //decrease heapSize
    imaxHeapify(vect,0,heapSize);
    i-=1;
  }
}
