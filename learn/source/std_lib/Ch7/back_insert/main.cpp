#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include "../../print.hpp"

int main()
{
  std::vector<int> coll;
  std::back_insert_iterator<std::vector<int> > iter(coll);

  *iter = 1;
  ++iter;
  *iter = 2;
  ++iter;
  *iter=3;
  
  PRINT_ELEMENTS(coll);

  std::back_inserter(coll) = 44;
  std::back_inserter(coll) = 55;
  
  PRINT_ELEMENTS(coll);

  coll.reserve(2*coll.size());
  std::copy(coll.begin(), coll.end(),std::back_inserter(coll));
  
  PRINT_ELEMENTS(coll);
  std::cout << std::endl;
  return 0;
}


