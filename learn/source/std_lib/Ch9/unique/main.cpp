#include "../../algostuff.hpp"
int main()
{
  int source[] = { 1, 4, 4, 6, 1, 2, 2, 3, 1, 6, 6, 6, 5, 7, 5, 4, 4 };
  int sourceNum = sizeof(source)/sizeof(source[0]);

  std::list<int> coll;
  std::copy(source, source+sourceNum,back_inserter(coll));
  PRINT_ELEMENTS(coll);

  std::list<int>::iterator pos;
  pos = std::unique(coll.begin(), coll.end());
  std::copy(coll.begin(), pos,std::ostream_iterator<int>(std::cout, " "));
  std::cout << "\n\n";
  
  std::copy(source, source+sourceNum,coll.begin());
  PRINT_ELEMENTS(coll);
  
  coll.erase(std::unique(coll.begin(), coll.end(),std::greater<int>()),coll.end());
  PRINT_ELEMENTS(coll);
}
