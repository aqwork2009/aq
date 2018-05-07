#ifndef _PRINTF_
#define _PRINTF_
#include <iostream>
#include <string>

template<typename T>
void PRINT_ELEMENTS(T& container,std::string str)
{
    std::cout<< str << ": ";
    PRINT_ELEMENTS(container);
};


template<typename T>
void PRINT_ELEMENTS(T& container)
{
  typename T::iterator its;
  for(its = container.begin();its != container.end();++its){
    std::cout << *its << " ";
}
};

#endif
