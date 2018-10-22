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
  double p[3][2];
  r(i,3) r(j,2) cin >> p[i][j];
  R(i,1,3) {
    p[i][0] -= p[0][0];
    p[i][1] -= p[0][1];
  }
  cout << fixed;
  cout << setprecision(1) << abs(p[1][0]*p[2][1]-p[1][1]*p[2][0])/2.0 << endl;
  return 0;
}