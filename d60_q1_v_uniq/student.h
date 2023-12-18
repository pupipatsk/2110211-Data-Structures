#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
//you are allow to use any data structure
#include <set>

template <typename T>
void CP::vector<T>::uniq() {
  CP::vector<T> unqVec;
  std::set<T> s;
  for (int i = 0; i < mSize; i++) {
    if (s.find(mData[i]) != s.end()) continue;
    unqVec.push_back(mData[i]);
    s.insert(mData[i]);
  }
  *this = unqVec;
}


#endif