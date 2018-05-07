#include <iostream>
#include <list>
#include <algorithm>
 
int main()
{
  std::list<int> coll;
  for( int i = 0; i < 10; ++i){
    coll.push_back(i);
  }
  std::list<int>::iterator pos;
  pos = std::find(coll.begin(), coll.end(), 5);
  std::cout << "pos: " << *pos <<std::endl;

  std::list<int>::reverse_iterator rpos(pos);
  std::cout << "rpos: " << *rpos <<std::endl;

  std::list<int>::iterator rrpos;
  rrpos = rpos.base();
  
  std::cout << "rrpos: " << *rrpos <<std::endl;
}
/*

 */
