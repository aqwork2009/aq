#include "../../algostuff.hpp"
int main()
{
  std::deque<int> coll;
  INSERT_ELEMENTS(coll, 3, 7);
  INSERT_ELEMENTS(coll, 2, 6);
  INSERT_ELEMENTS(coll, 1, 5);
  PRINT_ELEMENTS(coll);

  std::nth_element(coll.begin(), coll.begin()+3, coll.end());

  std::cout << "the four lowest elements are:";
  std::copy(coll.begin(), coll.begin()+4, std::ostream_iterator<int> (std::cout," "));
  std::cout << std::endl;
 
  std::nth_element(coll.begin(), coll.end()-4, coll.end());
  std::cout << "the four highest elements are:";

  std::copy(coll.end()-4, coll.end(), std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl;
  
  std::nth_element(coll.begin(), coll.begin()+3, coll.end(),std::greater<int>());
  std::cout<< "the four highest elements are:";
  std::copy(coll.begin(), coll.begin()+4, std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl;
  return 0;
}
