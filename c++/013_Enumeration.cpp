#include <iostream>
using namespace std;

enum permission
{
  execute = 1,
  write = 2,
  read = 4
};

int main()
{
int permission =execute | write | read;
  cout <<permission;
}
