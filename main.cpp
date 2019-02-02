// Reading and printing out the contents
// of a file.

#include <fstream>
#include <iostream>
using namespace std;

int main() {
  fstream f;
  f.open("island.txt", ios::in);

  string line;
  while (!f.eof()) {
    getline(f, line);
    cout << line << endl; 
  }

  return 0;
}
