#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
#define r(i,n) for(int i=0;i<n;i++)
#define debug(x) cerr << #x << ": " << x << endl;
using namespace std;

int main(){

  int n;
  cin >> n;
  
  while(n!=0){
    if(n%4==0){
      cout << "Yes" << endl;
      return 0;
    }
    if(n%7==0){
      cout << "Yes" << endl;
      return 0;
    }
    if(n>4){
      n -= 7;
    }
    if(n<4){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  
  return 0;
}
