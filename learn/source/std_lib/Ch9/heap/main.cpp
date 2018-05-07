#include "../../algostuff.hpp"

int main()
{
  std::vector<int> coll;
  INSERT_ELEMENTS(coll,3,7);
  INSERT_ELEMENTS(coll,5,9);
  INSERT_ELEMENTS(coll,1,4);

  PRINT_ELEMENTS(coll, "on entry:");
  std::make_heap(coll.begin(),coll.end());
  PRINT_ELEMENTS(coll, "after make_heap():");
 
  std::pop_heap(coll.begin(), coll.end());
  PRINT_ELEMENTS(coll, "after pop_heap():");
  coll.pop_back();
  PRINT_ELEMENTS(coll, "after pop_vector():");

  coll.push_back (17);
  PRINT_ELEMENTS(coll, "after push_vector :");
  std::push_heap(coll.begin(), coll.end());
  
  PRINT_ELEMENTS(coll, "after push_heap :");

  std::sort_heap(coll.begin(), coll.end());
  PRINT_ELEMENTS(coll, "after sort_heap():");
}

