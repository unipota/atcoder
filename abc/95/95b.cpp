#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#define r(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
  int N,X;
  cin >> N >> X;
  vector<int> m(N);
  r(i,N) cin>>m[i];
  sort(m.begin(),m.end());
  r(i,N) X-=m[i];
  int n = X/m[0] + N;
  cout << n << endl;
  return 0;
}