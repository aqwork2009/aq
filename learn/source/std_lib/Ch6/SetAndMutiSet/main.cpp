#include <iostream>
#include <set>
#include <iterator>
int main()
{
  typedef std::set<int,std::greater<int> >IntSet;
  IntSet coll1;
  coll1.insert(4);
  coll1.insert(3);
  coll1.insert(6);
  coll1.insert(5);
  coll1.insert(2);
  coll1.insert(1);
  IntSet::iterator pos;
  for( pos = coll1.begin(); pos != coll1.end(); ++pos){
    std::cout << *pos << " ";
  }
  std::cout << std::endl;
  std::pair<IntSet::iterator,bool> status = coll1.insert(4);
  if(status.second){
    std::cout << "4 Insert as element"
	      << std::distance(coll1.begin(),status.first) + 1
	      <<std::endl;
  }
  else{
    std::cout << "4 already exits" <<std::endl;
  }
  std::set<int> coll2( coll1.begin(),coll1.end());
  std::copy(coll2.begin(), coll2.end(),std::ostream_iterator<int>(std::cout," "));
  std::cout << std::endl;

  //remove all elemnts up to element with values 3
  coll2.erase(coll2.begin(), coll2.find(3));
  
  //remove all elements with value 5
  int num;
  num = coll2.erase(5);
  std::cout << num << "element(5) removed" << std::endl;
  
  //prints all elements
  std::copy(coll2.begin(), coll2.end(),std::ostream_iterator<int>(std::cout," "));
  std::cout << std::endl;
}
