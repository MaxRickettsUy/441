/*
  Main driver program for testing sorting algorithms
*/
#include "headers/rand_ints.h"
#include "headers/insertionSort.h"
#include "headers/mergeSort.h"
#include "headers/heapSort.h"
#include "headers/quickSort.h"
#include "headers/MyArray.h"
#include "iostream"

using namespace std;

void printVector(vector<int> vect){
  for (int i = 0; i < vect.size(); i++){
    cout << vect.at(i) << " ";
  }
  cout << endl;
}

int main(){

  vector<int> unsorted_vect;

  unsorted_vect = generate_random_ints();

  //copy rand vect in new vector
  vector<int> insertion_vect(unsorted_vect);
  vector<int> merge_vect(unsorted_vect);
  vector<int> heap_vect(unsorted_vect);
  vector<int> quick_vect(unsorted_vect);

  cout << "insertion_vect before sorting" << endl;

  printVector(insertion_vect);

  insertion_vect = insertionSort(insertion_vect);

  cout << "insertion_vect after sorting" << endl;

  printVector(insertion_vect);

  cout << "merge_vect before sorting" << endl;

  printVector(merge_vect);

  merge_vect = mergeSort(merge_vect,0,merge_vect.size());

  cout << "merge_vect after sorting" << endl;

  printVector(merge_vect);

  MyArray myArray(heap_vect.size(),heap_vect);

  cout << "heap_vect before sorting" << endl;

  myArray.printArray();

  cout << "heap_vect after sorting" << endl;

  vector<int>array = heapSort(myArray);

  myArray.setArray(array);

  myArray.printArray();

  cout << "quick_vect before sorting" << endl;

  printVector(quick_vect);

  //passing reference to quick_vect
  quickSort(&quick_vect,0,(quick_vect.size()-1));

  cout << "quick_vect after sorting" << endl;

  printVector(quick_vect);

  return 0;
}
