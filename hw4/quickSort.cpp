#include "headers/quickSort.h"
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
  int x = (*A)[r-1];
  cout << "x: " << x << endl;
  int i = p - 1;
  for(int j = p; i < r; i++){
    if((*A)[j] <= x){
      i += 1;
      int temp = (*A)[i];
      (*A)[i] = (*A)[j];
      (*A)[j] = temp;
    }
  }
  int temp = (*A)[r];
  (*A)[r] = (*A)[i+1];
  (*A)[i+1] = temp;
  return(i+1);
}

/*
QUICKSORT(A,p,r)
  q = PARTITION(A,p,r)
  QUICKSORT(A,p,q-1)
  QUICKSORT(A,q+1,r)
*/
void quickSort(vector<int> *A, int p, int r){
  int q = partition(A,p,r);
  quickSort(A,p,q-1);
  quickSort(A,q+1,r);
}
