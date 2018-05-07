#ifndef _MY_CONTAINER_
#define _MY_CONTAINER_
#include <map>

template<class key, class value>
class CMyContainer{
private:
  std::map<key,value> m_map;
public:

  typedef typename std::map<key,value>::iterator iterator;
  typedef typename std::map<key,value>::value_type value_type;
  //typedef T* iterator;
  //typedef const T* const_iterator;
  CMyContainer(){}
  virtual ~CMyContainer(){}
  
  //`typedef value_type&        reference;
  //typedef const value_type&  const_reference;
  //typedef std::size_t size_type;
  //typedef std::ptrdiff_t difference_type;
  //
  std::pair< iterator, bool > insert(key k,value v){
    return m_map.insert(std::make_pair(k,v));
  }
  iterator begin(){ return m_map.begin();}
  iterator end(){ return m_map.end();}
  
  value operator[](std::size_t i ){ 
    return m_map[i];
  }

  // value operator* (iterator & its){
  // return its->second;
  //}
  //const_reference operator[](std::size_t i) const { return  m_map[i];}

  std::size_t size() const {return m_map.size();}
  std::size_t max_size() const {return m_map.size();}
};

#endif
