#include "../headers/mergeSort.h"
#include <iostream>

void printCurrentVector(vector<int> vect){
  for (int i = 0; i < vect.size(); i++){
    cout << vect.at(i) << " ";
  }
  cout << endl;
}

vector<int> merge(vector<int> vect, int p, int q, int r){
  vector<int> L;
  vector<int> R;

  for(int i = p; i < q; i++){
    L.push_back(vect.at(i));
  }
  for(int i = q; i < r; i++){
    R.push_back(vect.at(i));
  }
  int i = 0;
  int j = 0;
  int k = p;

  for(int l = k; l < r; l++){
    if(j >= R.size() || (i < L.size() && L[i] < R[j])){
      vect[l] = L[i];
      i += 1;
    }
    else {
      vect[l] = R[j];
      j += 1;
    }
  }
  return vect;
}

vector<int> mergeSort(vector<int> vect, int p, int r){
  if(r - p > 1){
    int q = (p+r)/2;
    vect = mergeSort(vect,p,q);
    vect = mergeSort(vect,q,r);
    vect = merge(vect,p,q,r);
  }
  return vect;
}
