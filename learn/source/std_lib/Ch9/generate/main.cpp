#include <cstdlib>
#include "../../algostuff.hpp"

int main(int argc, char *argv[])
{
  std::list<int> coll;
  std::generate_n(std::back_inserter(coll), 5, rand);
  PRINT_ELEMENTS(coll);

  std::generate(coll.begin(), coll.end(), rand);
  PRINT_ELEMENTS(coll);
 return 0;
}

