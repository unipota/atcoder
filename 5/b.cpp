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
  int n,min=100,tmp;
  cin >> n;
  r(i,n) {
    cin >> tmp;
    min = tmp < min ? tmp : min;
  }
  cout << min << endl;
  return 0;
}