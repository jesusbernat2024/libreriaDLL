#include <iostream>
using namespace std;

extern "C" __declspec(dllexport) int multiplica(int x, int y){
  return x * y;
}