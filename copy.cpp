#include <iostream>
using namespace std;

#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {
  if (argc != 3) {
  cout << "Usage: " << argv[0] << " <source filename> <destination filename>" << std::endl;
  return 1; 
  }
  
  ifstream sourceFile(argv[1]);
  ofstream destinationFile(argv[2]);

  char ch;
  while (sourceFile.get(ch)) {
    destinationFile.put(ch);
  }
  sourceFile.close();
  destinationFile.close();

  std::cout << "File copied successfully from '" << argv[1] << "' to '" << argv[2] << "'" << std::endl;
  return 0;
}
