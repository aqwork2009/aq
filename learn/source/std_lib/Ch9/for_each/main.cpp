#include "../../algostuff.hpp"

class MeanValue{
private:
  long num;
  long sum;
public:
  MeanValue():num(0),sum(0){
  }

  void operator()(int elem){
    ++num;
    sum += elem;
  }

  operator double()
  {
    return static_cast<double>(sum)/static_cast<double>(num);
  }
};

int main()
{
  std::vector<int> coll;

  INSERT_ELEMENTS(coll,1,8);

  double mv = for_each(coll.begin(),coll.end(),MeanValue());
  std::cout << "mean value: " << mv <<std::endl;
  return 0;
};
