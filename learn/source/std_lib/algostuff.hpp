#ifndef _ALGOSTUFF_HPP_
#define _ALGOSTUFF_HPP_

#include <iostream>
#include <iterator>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <functional>
#include <numeric>

template <class T>
inline void PRINT_ELEMENTS(const T &coll, const char* opcstr = "")
{
  typename T::const_iterator pos;
  std::cout << opcstr;
  for(pos = coll.begin(); pos != coll.end(); ++pos){
    std::cout << *pos << ' '; 
  }
  std::cout << std::endl;
}

template <class T>
inline void INSERT_ELEMENTS(T& coll, int first, int last)
{
  for(int i = first; i <= last; ++i){
    coll.insert(coll.end(),i);
  }
}

#endif /* _ALGOSTUFF_HPP_ */
