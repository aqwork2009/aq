#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
  const string delims(" huangxq");
  string line;
  while(getline(cin, line)){
    string::size_type begIdx, endIdx;
    begIdx = line.find_first_not_of(delims);
    std::cout<< line << std::endl;
    std::cout << "begIdx " << begIdx;
    while( begIdx != string::npos){
      begIdx = line.find_first_not_of(delims, begIdx);
      if(endIdx == string::npos){
	endIdx = line.length();
      }
      for (int i = endIdx - 1; i >= static_cast<int>(begIdx); --i){
	std::cout << line[i];
      }
    
      std::cout << ' ';

      begIdx = line.find_first_not_of(delims, endIdx);

    }
  }
  return 0;
}
