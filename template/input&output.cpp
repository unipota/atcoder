#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
#define r(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){

  //少数の桁表示
  std::cout << std::setprecision(2) << 3.141; // "3.1"
  std::cout << std::setprecision(2) << 3.0; // "3"

  std::cout << std::fixed;
  std::cout << std::setprecision(2) << 3.141; // "3.14"
  std::cout << std::setprecision(2) << 3.0;   // "3.00"

  std::cout << std::defaultfloat;
  std::cout << 0.0001;  // "0.0001"（小数点数表記）
  std::cout << 0.00001; // "1e-05"  (指数表記)
  
  cout << setfill('0') << setw(5) << right << 42; // 00042

  return 0;
}