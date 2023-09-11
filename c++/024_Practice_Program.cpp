#include <iostream>
#include <fstream>
using namespace std;
int main() {
  ofstream outfile("myfile.txt");
  outfile << "Hello World";
  outfile.close();
  return 0;
  cout<<"File has been created";
  ifstream outfile("myfile.txt");
}
