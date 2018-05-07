#include <bitset>
#include <iostream>

int main(int argc, char *argv[])
{
  enum Color{red, yellow, green,blue, white, black ,numColors};
  std::bitset<numColors> usedColors;
  
  usedColors.set(red);
  usedColors.set(blue);

  std::cout << "bitfield of used colors: " << usedColors << std::endl;
  std::cout << "number of used colors:" << usedColors.count() << std::endl;
  std::cout << "bitfield of unused colors: " << ~usedColors << std::endl;

  if(usedColors.any()){
    for(int c = 0; c < numColors; ++c){
      // if(usedColors[(Color)c]){
	std::cout << "c = "<< c << " usedCorlors = " << usedColors[(Color)c] << std::endl;
	//}
    } 
  }
  
  return 0;
}

