#include "headers/MyArray.h"

  MyArray::MyArray(int heapSize, vector<int> array){
    setHeapSize(heapSize);
    setArray(array);
  }

  void MyArray::setHeapSize(int newSize){
    m_heapSize = newSize;
  }

  int MyArray::getHeapSize(){
    return m_heapSize;
  }

  void MyArray::setArray(vector<int> array){

    if(!m_array.empty()){
      m_array.clear();
    }

    for(int i =0; i < array.size(); i++){
        m_array.push_back(array.at(i));
    }
  }

  vector<int> MyArray::getArray(){
    return m_array;
  }

  void MyArray::printArray(){
    for(int i = 0; i < m_array.size(); i++){
      cout << m_array.at(i) << " ";
    }
    cout << endl;
  }
