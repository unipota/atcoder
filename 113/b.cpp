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
  int n;
  cin >> n;
  int t,a;
  cin >> t >> a;
  double h[n];
  double min = 999999;
  int minIndex = 0;
  r(i,n){
    cin >> h[i];
    h[i] = abs(t - h[i]*0.006 - a);
    // cout << h[i] << endl;
    if(h[i] < min){
      min = h[i];
      minIndex = i;
    }
  }
  cout << minIndex + 1 << endl;
  return 0;
}