#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
#define r(i,n) for(int i=0;i<n;i++)
#define debug(x) cerr << #x << ": " << x << endl;
using namespace std;

int main(){
  int x[3];
  cin >> x[0] >> x[1] >> x[2];

  int sum;
  int sum1 = abs(x[0]-x[1]);
  int sum2 = abs(x[1]-x[2]);
  int sum3 = abs(x[2]-x[0]);
  sum = sum1 + sum2 + sum3 - max({sum1,sum2,sum3});
  cout << sum << endl;
  return 0;
}