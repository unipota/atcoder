#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#define r(i,n) for(int i=0;i<n;i++)
using namespace std;

bool isPrime(int n){
  if(n==1) return false;
  for(int i=2;i*i<=n;i++)
    if(n%i==0)
      return false;
  return true;
}

int main(){
  int N;
  cin >> N;
  int x = 6;
  while(1){
    if(isPrime(x)){
      cout << x << " ";
      N --;
    }
    if(N<=0)
      break;
    x += 5;
  }
  return 0;
}
