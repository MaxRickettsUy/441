/*
  Generates vector of 1000 random integers and returns vector
*/

#include "headers/rand_ints.h"
#include <cstdlib>

vector<int> generate_random_ints(){

  int num_ints = 100;
  vector<int> ints_vect;
  for(int i = 0; i < num_ints; i++){
    ints_vect.push_back(std::rand() % num_ints);
  }
  return ints_vect;
}
