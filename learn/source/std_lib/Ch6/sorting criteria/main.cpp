#include <iostream>
#include <set>
#include <string>
using namespace std;

template <class T>
class RuntimeCmp{
public:
  enum cmp_mode{normal,reverse};
private:
  cmp_mode mode;
public:
  RuntimeCmp(cmp_mode m=normal):mode(m){
  }

  bool operator()(const T& t1, const T& t2)const{
    return mode == normal?t1 < t2 : t2 < t1;
  }

  bool operator == (const RuntimeCmp& rc){
    return mode == rc.mode;
}
};

template<typename T>
void PRINT_ELEMENTS(T& container,string str)
{
  typename T::iterator its;
  std::cout<< str << ":";
  for(its = container.begin();its != container.end();++its){
    std::cout << *its << " ";
}
}

typedef std::set<int, RuntimeCmp<int> > IntSet;
//typedef std::set<int> MySet;
typedef std::multiset<int> MySet;
void fill (MySet& set);

int main()
{
  MySet coll1;
  fill(coll1);
  PRINT_ELEMENTS(coll1,"coll:");
  
  //RuntimeCmp<int> reverse_order(RuntimeCmp<int>::reverse);
  //MySet coll2(reverse_order);
  MySet coll2;
  fill(coll2);
  PRINT_ELEMENTS(coll2,"coll2:");

  coll1 = coll2;
  coll1.insert(3);
  PRINT_ELEMENTS(coll1,"coll1:");

  /*  if(coll1.value_comp() == coll2.value_comp()){
    std::cout << "coll1 and coll2 have same sorting criterion" 
	      <<std::endl;
  }
  else{
    std::cout<< "coll1 and coll2 have different sorting criterion" 
	     <<std::endl;
	     }*/
  return 0;
}

void fill(MySet& set)
{
  set.insert(4);
  set.insert(7);
  set.insert(5);
  set.insert(1);
  set.insert(2);
  set.insert(6);
  set.insert(5);
}
