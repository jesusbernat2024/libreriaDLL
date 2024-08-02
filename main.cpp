#include <iostream>
#include <windows.h>
using namespace std;

typedef int (*MultFunc)(int x, int y);

int main() {

  
  HMODULE hModule = LoadLibraryA("operaciones.dll");
  MultFunc multiplica = (MultFunc)GetProcAddress(hModule, "multiplica");

  //GetProcAddress(hModule,"multiplica");
  
  int a=3, b=7, res;
  res = multiplica(5,3);
  cout << res;

  return 0;
}
