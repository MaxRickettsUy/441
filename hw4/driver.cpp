/*
  Main driver program for testing sorting algorithms

  this program takes two arguments num_ints, an int, the number of the elements to populate the unsorted array with
  and sort, an int, which determines which sorting algorithm to use
  1 = insertionSort
  2 = mergeSort
  3 = heapSort
  4 = quickSort
  5 = iterativeHeapSort

  there are four sections in the bottom half of this file that calls each algorithm based on the sort arg
  there are print statements to display the input array, <sortname>_vect for each algorithm before and after sorting
  uncomment them to display the unsorted and sorted arrays
*/

#include "headers/rand_ints.h"
#include "headers/insertionSort.h"
#include "headers/mergeSort.h"
#include "headers/heapSort.h"
#include "headers/quickSort.h"
#include "headers/iterativeHeapSort.h"
#include <cstdlib>
#include "iostream"

using namespace std;

void printVector(vector<int> vect){
  for (int i = 0; i < vect.size(); i++){
    cout << vect.at(i) << " ";
  }
  cout << endl;
}

//function to allow user to choose which algorithm to calls
string prompt(string sort){

  string answer = "";
  cout << "call " << sort << " ?(yes or no): ";
  cin >> answer;
  return answer;

}

int main(int argc, char *argv[]){

  if(argc < 3){
    cout << "please enter 2 arguments following executable" << endl;
    return(1);
  }

  vector<int> unsorted_vect;


  int num_ints = atoi(argv[1]);
  string sort = argv[2];

  unsorted_vect = generate_random_ints(num_ints);

  //copy rand vect in new vector
  vector<int> insertion_vect(unsorted_vect);
  vector<int> merge_vect(unsorted_vect);
  vector<int> heap_vect(unsorted_vect);
  vector<int> quick_vect(unsorted_vect);
  vector<int> iterative_vect(unsorted_vect);

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

    // cout << "merge_vect before sorting" << endl;
    //
    // printVector(merge_vect);

    merge_vect = mergeSort(merge_vect,0,merge_vect.size());

    // cout << "merge_vect after sorting" << endl;
    //
    // printVector(merge_vect);
  }

/******************** end merge sort ********************/

  //answer = prompt("heapSort");

/******************** start heap sort *************************/

  if(sort == "3"){

    // cout << "heap_vect before sorting" << endl;
    //
    // printVector(heap_vect);
    //
    // cout << "heap_vect after sorting" << endl;

    heapSort(&heap_vect);

    // printVector(heap_vect);

  }

/******************** end heap sort *************************/

  // answer = prompt("quickSort");

/******************** start quick sort *************************/

  if(sort == "4"){

    // cout << "quick_vect before sorting" << endl;
    //
    // printVector(quick_vect);

    //passing reference to quick_vect
    quickSort(&quick_vect,0,(quick_vect.size()-1));

    // cout << "quick_vect after sorting" << endl;
    //
    // printVector(quick_vect);
  }

/******************** end quick sort *************************/

/******************** end iterative heap sort *************************/

  if(sort == "5"){

    //cout << "iterative_vect before sorting" << endl;

    // printVector(iterative_vect);

    iterativeHeapSort(&iterative_vect);

    // cout << "iterative_vect after sorting" << endl;

    // printVector(iterative_vect);
  }

/******************** end iterative heap sort *************************/


  return 0;
}
