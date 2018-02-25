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

void maxHeapify(MyArray myArray, int i){
  //cout << "inside maxHeapify" << endl;
  vector<int> array(myArray.getArray());
  int left = Left(i);
  int right = Right(i);
  int largest = i;
  if(left <= (myArray.getHeapSize() -1) && array[left] > array[i]){
    largest = left;
  }
  if(right <= (myArray.getHeapSize() -1) && array[right] > array[largest]){
    largest = right;
  }
  if(largest != i){
    int temp = array[i];
    array[i] = array[largest];
    array[largest] = temp;
    myArray.setArray(array);
    maxHeapify(myArray,largest);
  }
  myArray.setArray(array);
}

void buildMaxHeap(MyArray myArray){
  //cout << "inside buildMaxHeap" << endl;
  vector<int> array(myArray.getArray());
  int i = array.size()/2;
  while(i >= 0){
    maxHeapify(myArray,i);
    i -= 1;
  }
  myArray.setArray(array);
  //cout << "myArray after buildMaxHeap" << endl;
  myArray.printArray();
}

void heapSort(MyArray myArray){
  //cout << "inside heapSort" << endl;
  buildMaxHeap(myArray);
  vector<int> array(myArray.getArray());
  int i = array.size()-1;
  while(i >= 0){
    int temp = array[0];
    array[0] = array[i];
    array[i] = temp;
    myArray.setHeapSize(myArray.getHeapSize()-1);
    myArray.setArray(array);
    maxHeapify(myArray,0);
    i-=1;
  }
}
