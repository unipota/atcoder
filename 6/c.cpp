#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
#define r(i,n) for(int i=0;i<n;i++)
#define R(i,c,n) for(int i=c;i<n;i++)
#define debug(x) cerr << #x << ": " << x << endl;
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  int x,y,z;
  r(i,n+1){
    if((3*n-m+i)>=0 && (m-2*n-2*i)>=0){
      x = 3*n-m+i;
      y = m-2*n-2*i;
      z = i;
      cout << x << " " << y << " " << z << endl;
      return 0;
    }
  }
  cout << "-1 -1 -1" << endl;
  return 0;
}