#include <iostream>
#include <vector>
#include "../headers/insertionSort.h"

/*pseudocode
INSERTION-SORT(A)				           cost	times
  for j = 2 to A.length				       c1 	n
  key = A[j] //A being the array		 c2 	n - 1
  //Insert A[j] into the sorted
  sequence A[1 ... j-1].
  i = j -1				                   c4	n - 1
  while i > 0 and A[i] > key		     c5	n - 1
    A[i+1] = A[i]			               c6	summation, j=2 to n, t (j subscript)
    i = i - 1			                   c7 	summation, j=2 to , t(j subscript) - 1
    A[i+1] = key				             c8 	n - 1
*/
vector<int> insertionSort(vector<int> vect){
  for(int j = 0; j < vect.size(); j++){
    int key = vect[j];
    int i = j - 1;
    while(i >= 0 && vect[i] > key){
      vect[i+1] = vect[i];
      i -=1;
    }
    vect[i+1] = key;
  }
  return vect;
}
