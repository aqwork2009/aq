#include <iostream>
#include <list>
#include <algorithm>
#include "../../print.hpp"

class IntSequence{
private:
  int value;
public:
  IntSequence(int initialValue)
    :value(initialValue){
  }
  int operator() (){
    return value++;
  }
};

int main(int argc, char *argv[])
{
  std::list<int> coll;
  std::generate_n(std::back_inserter(coll), 9, IntSequence(1));

  PRINT_ELEMENTS(coll);
  std::cout << std::endl;

  std::generate(++coll.begin(), --coll.end(), IntSequence(42));
  PRINT_ELEMENTS(coll);
  return 0;
}
