#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#define r(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
  char a[10];
  r(i,3) cin>>a[i];
  int n=700;
  r(i,3) n+= a[i]=='o' ? 100 : 0;
  cout << n << endl;
  return 0;
}