#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#define r(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
  int a,b;
  cin >> a >> b;

  if(a+b==15){
    cout << "+" << endl;
  }else if(a*b==15){
    cout << "*" << endl;
  }else {
    cout << "x" << endl;
  }
  
  return 0;
}
