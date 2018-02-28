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

string prompt(string sort){

  string answer = "";
  cout << "call " << sort << " ?(yes or no): ";
  cin >> answer;
  return answer;

}

int main(int argc, char *argv[]){

  vector<int> unsorted_vect;

  string sort = argv[1];

  unsorted_vect = generate_random_ints();

  //copy rand vect in new vector
  vector<int> insertion_vect(unsorted_vect);
  vector<int> merge_vect(unsorted_vect);
  vector<int> heap_vect(unsorted_vect);
  vector<int> quick_vect(unsorted_vect);

  //string answer = prompt("insertionSort");

/******************** start insertion sort ********************/

  if(sort == "1"){

    cout << "insertion_vect before sorting" << endl;

    printVector(insertion_vect);

    insertion_vect = insertionSort(insertion_vect);

    cout << "insertion_vect after sorting" << endl;

    printVector(insertion_vect);
  }

/******************** end insertion sort ********************/

  //answer = prompt("mergeSort");

/******************** start merge sort ************************/

  if(sort == "2"){
    cout << "merge_vect before sorting" << endl;

    printVector(merge_vect);

    merge_vect = mergeSort(merge_vect,0,merge_vect.size());

    cout << "merge_vect after sorting" << endl;

    printVector(merge_vect);
  }

/******************** end merge sort ********************/

  //answer = prompt("heapSort");

/******************** start heap sort *************************/

  if(sort == "3"){

    cout << "heap_vect before sorting" << endl;

    printVector(heap_vect);

    cout << "heap_vect after sorting" << endl;

    heapSort(&heap_vect);

    printVector(heap_vect);

  }

/******************** end heap sort *************************/

  // answer = prompt("quickSort");

/******************** start quick sort *************************/

  if(sort == "4"){

    cout << "quick_vect before sorting" << endl;

    printVector(quick_vect);

    //passing reference to quick_vect
    quickSort(&quick_vect,0,(quick_vect.size()-1));

    cout << "quick_vect after sorting" << endl;

    printVector(quick_vect);
  }

/******************** end quick sort *************************/
  return 0;
}
