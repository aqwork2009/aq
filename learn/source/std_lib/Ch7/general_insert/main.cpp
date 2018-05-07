#include <iostream>
#include <set>
#include <list>
#include <algorithm>
#include <iterator>
#include <string>
#include "../../print.hpp"


int main()
{
  std::set<int> coll;
  std::insert_iterator<std::set<int> > iter(coll,coll.begin());

  *iter = 1;
  ++iter;
  *iter = 2;
  ++iter;
  *iter = 3;
  
  PRINT_ELEMENTS(coll);
  //  PRINT_ELEMENTS(coll, "set:");
  std::cout<<std::endl;

  //這是個有序的容器，所以無效
  std::set<int>::iterator its = ++coll.begin();
  std::inserter(coll,++its) = 44;
  std::inserter(coll,coll.begin()) = 55;
  PRINT_ELEMENTS(coll);
 
  std::cout<<std::endl;
  std::list<int> coll2;
  std::copy(coll.begin(), coll.end(), std::inserter(coll2,coll2.begin()));
  PRINT_ELEMENTS(coll2);
  std::cout << std::endl;

  std::inserter(coll2,++coll2.begin()) = 99;
  PRINT_ELEMENTS(coll2);


  std::cout<<std::endl;
  std::copy(coll.begin(), coll.end(), std::inserter(coll2,++coll2.begin()));
  PRINT_ELEMENTS(coll2);
  return 0;
};
