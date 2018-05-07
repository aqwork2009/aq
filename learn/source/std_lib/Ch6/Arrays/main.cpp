#include <iostream>
#include <algorithm>
#include <functional>
#include <iterator>
using namespace std;
int main()
{
  int coll[] = { 5, 6, 7, 2, 4, 1, 3 };
  int coll2[] = {10,11, 12, 13, 14, 15, 16 };
  std::sort (coll, coll+7);
  std::transform(coll, coll+7, coll2, coll2, std::multiplies<int>());
  std::sort (coll, coll+7);
  std::copy (coll, coll+7, std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl;
  std::sort (coll2, coll2+7);
  std::copy (coll2, coll2+7, std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl;
}
