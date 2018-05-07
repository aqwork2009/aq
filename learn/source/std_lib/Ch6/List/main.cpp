#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
void printLists(const std::list<int> & la,const std::list<int> &lb)
{
  std::cout<< "List a:" ;
  std::copy(la.begin(),la.end(),std::ostream_iterator<int> (std::cout," "));
  std::cout << std::endl << "list b:";
  std::copy(lb.begin(),lb.end(),std::ostream_iterator<int> (std::cout," "));
  std::cout << std::endl <<std::endl;

}

int main()
{
  std::list<int> listA,listB;
  for (int i = 0; i < 6; ++i){
    listA.push_back(i);
    listB.push_front(i);
  }
  printLists(listA, listB);
  
  listB.splice(std::find(listB.begin(), listB.end(),3),listA);
  printLists(listA,listB);
  
  listB.splice(listB.end(),listB,listB.begin());
  printLists(listA,listB);

  listB.sort();
  listA = listB;
  
  listB.unique();
  printLists(listA,listB);
  
  listA.merge(listB);
  printLists(listA, listB);
}
