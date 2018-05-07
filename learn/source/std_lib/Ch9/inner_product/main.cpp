#include "../../algostuff.hpp"

int main(int argc, char *argv[])
{
  std::list<int> coll;
  INSERT_ELEMENTS(coll, 1, 6);
  PRINT_ELEMENTS(coll, "coll:");
  
  std::cout << "coll inner_product: "
	    << std::inner_product(coll.begin(), coll.end(), coll.begin(), 0)
	    <<std::endl;

  std::cout << "coll inner_product 1 multiplies plus: "
	    << std::inner_product(coll.begin(), coll.end(), coll.begin(), 1,std::multiplies<int>(),std::plus<int>())
	    << std::endl;


  std::cout << "coll inner_product 2 multiplies plus: "
	    << std::inner_product(coll.begin(), coll.end(), coll.begin(), 2,std::multiplies<int>(),std::plus<int>())
	    << std::endl;
  return 0;
}
