#include "../../algostuff.hpp"

int main()
{
  std::vector<int> coll;
  INSERT_ELEMENTS(coll, 1, 4);
  PRINT_ELEMENTS(coll, "coll elements");
  
  std::cout << "accumulate:"
	    << std::accumulate(coll.begin(), coll.end(), 0)
	    <<std::endl;

  std::cout << "accumulate -100:  "
	    << std::accumulate(coll.begin(), coll.end(), -100)
	    <<std::endl;


  std::cout << "accumulate: mutiplies 1 :"
	    << std::accumulate(coll.begin(), coll.end(), 1,std::multiplies<int>())
	    <<std::endl;

  std::cout << "accumulate:mutiplies 0 :"
	    << std::accumulate(coll.begin(), coll.end(), 0,std::multiplies<int>())
	    <<std::endl;

  return 0;
}
 
