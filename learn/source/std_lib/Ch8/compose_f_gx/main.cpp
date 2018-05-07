#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <iterator>
#include "../../print.hpp"
#include "compose11.hpp"

int main(int argc, char *argv[])
{
  std::vector<int> coll;
  for(int i = 1; i <=9; ++i){
    coll.push_back(i);
  }

  PRINT_ELEMENTS(coll);
  
  std::transform(coll.begin(), coll.end(),
		std::ostream_iterator<int> (std::cout, " "),
		compose_f_gx(std::bind2nd(std::multiplies<int>(),5),
			     std::bind2nd(std::plus<int>(), 10)));
  std::cout << std::endl;
  return 0;
}
