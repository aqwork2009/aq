#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

#include "fopow.hpp"

int main(int argc, char *argv[])
{
  std::vector<int> coll;
  for (int i = 1; i <9; ++i){
    coll.push_back(i);
  }

  std::transform(coll.begin(), coll.end(), std::ostream_iterator<int>(std::cout, "\n "), 
  		 std::bind1st(fopow<float, int> (), 3));

  std::cout << std::endl;

  std::transform(coll.begin(), coll.end(), std::ostream_iterator<int> (std::cout, "\n "), 
  		 std::bind2nd(fopow<float,int>(),3));

  std::cout << std::endl;

  std::for_each(coll.begin(), coll.end(), std::bind2nd(fopow<float, int>(), 3));

  std::cout << std::endl;

  
  return 0;
}
