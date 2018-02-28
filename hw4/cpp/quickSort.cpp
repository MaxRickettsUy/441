#include "../headers/quickSort.h"
#include <iostream>
/*
PARTITION(A,p,r):
x = A[r]
i = p - 1
for j= p to r - 1
  if A[j] <= x
    i = i + 1
    exchange A[i] with A[j]
exchange A[i +1] with A[r]
return i + 1
*/
int partition(vector<int> *A, int p, int r){
  int x = (*A)[r]; //last element in vector, pivot elements
  int i = p - 1; //one index before first element in A
  //starting at the first index of the subarray and
  //ending at the index one before the last element in the
  //subarray
  for(int j = p; j < r; j++){
    //if the current element is less than the pivot
    if((*A)[j] <= x){
      i += 1;
      int temp = (*A)[i];
      (*A)[i] = (*A)[j];
      (*A)[j] = temp;
    }
  }
  (*A)[r] = (*A)[i+1];
  (*A)[i+1] = x; //x = A[r-1]
  return(i+1);
}

/*
QUICKSORT(A,p,r)
  q = PARTITION(A,p,r)
  QUICKSORT(A,p,q-1)
  QUICKSORT(A,q+1,r)
*/
/*
  A = vector reference
  p = index of first value in A
  r = index of last value in A
*/
void quickSort(vector<int> *A, int p, int r){
  if(p < r){
    int q = partition(A,p,r); //pivot
    quickSort(A,p,q-1);
    quickSort(A,q+1,r);
  }
}
