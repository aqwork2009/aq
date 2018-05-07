#include <bitset>
#include <iostream>
#include <string>
#include <limits>

int main(int argc, char *argv[])
{
  std::cout << "267 as binary short:" 
	    << std::bitset<std::numeric_limits<unsigned short>::digits>(267)
	    << "/t std::numeric_limits<unsigned short>::digits" << std::numeric_limits<unsigned short>::digits
	    << std::endl;

  std::cout << "267 as binary long:" 
	    << std::bitset<std::numeric_limits<unsigned long>::digits>(267)
	    << "/t std::numeric_limits<unsigned long>::digits" << std::numeric_limits<unsigned long>::digits
	    << std::endl;

  std::cout << "10,000,000 with 24 bits:"
	    << std::bitset<24>(1e7) << std::endl;

  std::cout << "\"1000101011\" as number: "
	    << std::bitset<100>(std::string("1000101011")).to_ulong()
	    <<std::endl;
  return 0;
}
