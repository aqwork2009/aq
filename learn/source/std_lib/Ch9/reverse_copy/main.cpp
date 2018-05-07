#include "../../algostuff.hpp"
#include <string>
int main()
{
   std::set<int> coll;
  INSERT_ELEMENTS(coll,1,9);
  PRINT_ELEMENTS(coll);

  std::set<int>::iterator its = coll.begin();
  advance(its,1);
  std::rotate_copy(coll.begin(),its,coll.end(),std::ostream_iterator<int>(std::cout," "));
  std::cout << std::endl;

  its = coll.end();
  advance(its, -2);
  std::rotate_copy(coll.begin(), its, coll.end(), std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl;

  std::rotate_copy(coll.begin(), coll.find(4), coll.end(), std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl;
  
}
