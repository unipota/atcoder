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
  int t,n,m,tmp;
  cin >> t;
  cin >> n;
  int a[n];
  r(i,n) cin >> a[i];
  cin >> m;
  int b[m];
  r(i,m) cin >> b[i];
  
  int k=0;
  r(i,m){
    if(k==n){
      cout << "no" << endl;
      return 0;
    }
    if(b[i]-a[k]<=t && b[i]-a[k]>=0){
      k++;
      continue;
    }else{
      k++;
      i--;
      continue;
    }
  }
  cout << "yes" << endl;
  return 0;
}