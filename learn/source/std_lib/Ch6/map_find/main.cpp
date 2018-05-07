#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

enum{EM_RAW,EM_POW};
template <class K,class V>
class value_equals{
private:
  V value;
  int m_nState;

public:

  value_equals(const V& v,int nState)
    :value(v),m_nState(nState){
  }

  bool operator()(std::pair<const K,V> elem){
    if(m_nState == EM_POW){
      return elem.second*elem.second == value;
    }
    else{
    return elem.second == value;
    }

}
};

int main()
{
  typedef map<float,float> FloatFloatMap;
  FloatFloatMap coll;
  FloatFloatMap::iterator pos;

  coll[1] = 7;
  coll[2] = 4;
  coll[3] = 2;
  coll[4] = 3;
  coll[5] = 6;
  coll[6] = 1;
  coll[7] = 3;
  coll[8] = 8;
  coll[9] = 9;

  pos = coll.find(3.0);
  if(pos != coll.end()){
    std::cout << pos->first << ":"
	      << pos->second << std::endl;
}

  pos = find_if(coll.begin(),coll.end(),value_equals<float,float>(3.0,EM_RAW));
  if(pos != coll.end()){
    std::cout << pos->first << ":"
	      << pos->second << std::endl;
}

  pos = find_if(coll.begin(),coll.end(),value_equals<float,float>(49.0,EM_POW));
  if(pos != coll.end()){
    std::cout << pos->first << ":"
	      << pos->second << std::endl;
}
  
  return 0;
}

