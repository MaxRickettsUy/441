#include "headers/heapSort.h"

int heapMax(MyArray myArray){
  vector<int> array(myArray.getArray());
  return array[0];
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

vector<int> maxHeapify(MyArray myArray, int i){
  vector<int> array(myArray.getArray());
  int left = Left(i); //index of left child node of i
  int right = Right(i); //index of right child node of i
  int largest = i;
  if(left <= (myArray.getHeapSize() -1) && (array[left] > array[i])){
    largest = left;
  }
  if(right <= (myArray.getHeapSize() -1) && (array[right] > array[largest])){
    largest = right;
  }
  if(largest != i){
    int temp = array[i];
    array[i] = array[largest];
    array[largest] = temp;
    myArray.setArray(array);
    array = maxHeapify(myArray,largest);
    myArray.setArray(array);
  }
  return array;
}

vector<int> buildMaxHeap(MyArray myArray){
  vector<int> array(myArray.getArray());
  int i = array.size()/2;
  while(i >= 0){
    array = maxHeapify(myArray,i);
    myArray.setArray(array);
    i -= 1;
  }
  return myArray.getArray();
}

vector<int> heapSort(MyArray myArray){
  vector<int>array = buildMaxHeap(myArray);
  int i = array.size()-1; //index of last element in array
  while(i >= 0){
    int temp = array[0];
    array[0] = array[i]; //move smallest element to top of heap
    array[i] = temp;     //move heapMax to end of heap
    myArray.setHeapSize(myArray.getHeapSize()-1); //decrease heapSize
    myArray.setArray(array);
    array = maxHeapify(myArray,0);
    myArray.setArray(array);
    i-=1;
  }
  return myArray.getArray();
}
