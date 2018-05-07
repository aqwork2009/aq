#include <iostream>
#include <iterator>

int main(int argc, char *argv[])
{
  std::istream_iterator<int> intReader(std::cin);

  std::istream_iterator<int> intReaderEOF;
  while( intReader != intReaderEOF){
    std::cout << "once: " << *intReader << std::endl;
    std::cout << "once again: " << *intReader << std::endl;
    ++intReader;
   }



  return 0;
}
