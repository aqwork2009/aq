#include <iostream>
#include <iterator>
#include <algorithm>
#include "carray.hpp"
#include "../../print.hpp"
#include "mycontainer.hpp"
int main()
{
  CArray<int, 10> a;
  for (unsigned i = 0; i<a.size(); ++i) {
    a[i] = i +1;
  } 
  PRINT_ELEMENTS(a);
  std::reverse(a.begin(),a.end());
  PRINT_ELEMENTS(a);

  std::transform(a.begin(),a.end(),
		 a.begin(),
		 std::negate<int>());
  PRINT_ELEMENTS(a);
  std::cout <<std::endl;


  std::cout << "My Map :" << std::endl;
  CMyContainer<int, int> myMap;
  for(unsigned i = 0; i < 10; ++i){
    myMap.insert(i,(i*10));
  }

  CMyContainer<int, int>::iterator its = myMap.begin();
  //while(its != myMap.end()){
    
  //}
  for(int i = 0; i < myMap.size(); ++i){
    std::cout << myMap[i] << " "; 
  }
  std::cout <<std::endl;
  
  //  std::transform(myMap.begin(),myMap.end(),
  //		 myMap.begin(),
  //		 std::negate<int>());

  
  return 0;
}
