#include <cstddef>

template<class T, std::size_t the_size>
class CArray{
private:
  T v[the_size];
public:
  typedef T value_type;
  typedef T* iterator;
  typedef const T* const_iterator;
  typedef T&        reference;
  typedef const T&  const_reference;
  typedef std::size_t size_type;
  typedef std::ptrdiff_t difference_type;

  iterator begin(){ return v;}
  iterator end(){ return v + the_size;}
  reference operator[](std::size_t i ) { return v[i];}
  const_reference operator[](std::size_t i) const { return v[i];}
  size_type size() const {return the_size;}
  size_type max_size() const {return the_size;}
  T* as_array() { return v;}
};
