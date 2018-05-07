#include <functional>
#include <cmath>
#include <iostream>


template<class T1, class T2>
struct fopow: public std::binary_function<T1, T2, T1>
{
  T1 operator() ( T1 base, T2 exp) const {
    std::cout << "base exp [" << base << ", " << exp << "]";
    return std::pow(base, exp);
  }
};
