#ifndef MY_ARRAY
#define MY_ARRAY
#include <vector>
#include <iostream>
using namespace std;

class MyArray {
  public:

    MyArray(int heapSize, vector<int> array);
    void setHeapSize(int newSize);
    int getHeapSize();
    vector<int> getArray();
    void setArray(vector<int> vect);
    void printArray();

  private:
    int m_heapSize; //size of current heap within m_array
    vector<int> m_array; //data structure containing original elements
};

#endif
