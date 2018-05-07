#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main(int argc, char *argv[])
{
  std::ostream_iterator<int> intWriter(std::cout, "\n");
  
  *intWriter = 42;
  intWriter++;
  *intWriter = 77;
  ++intWriter;
  *intWriter = -5;

  std::vector<int> coll;
  for(int i = 1; i <= 9; ++i){
    coll.push_back(i);
  }

  std::copy(coll.begin(), coll.end(), std::ostream_iterator<int>(std::cout));
  std::cout << std::endl;

  std::copy(coll.begin(), coll.end(), std::ostream_iterator<int>(std::cout, " < "));
    std::cout << std::endl;

  return 0;
}


















