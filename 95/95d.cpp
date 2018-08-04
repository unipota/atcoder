#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#define r(i,n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;

int main(){
  int n;
  ll c;
  cin >> n >> c;
  vector<ll> x(2*n+1),v(2*n+1);
  r(i,n){
    cin >> x[n+i+1] >> v[n+i+1];
    x[i] = c-x[n+i+1];
    v[i] = v[n+i+1];
  }
  x[n] = 0;
  v[n] = 0;
  r(i,2*n+1) cout << x[i] << "," << v[i] << endl;
  ll myi=n;//index
  ll offset=0;
  ll right,left;
  int sum = 0;
  while(1){
    if(myi>=2*n || myi<=0)
      break;
    right = v[myi+1] - x[myi+1] + offset;
    left = v[myi-1] - x[myi-1] - offset;
    cout << left << ":" << right << endl;
    if(max(right,left)<=0)
      break;
    if(right>left)
      cout << "to right" << endl;
    else
      cout << "to left" << endl;
    myi = right > left ? myi+1 : myi-1;
    sum += v[myi] - x[myi];
    sum += right > left ? offset : -offset;
    offset+= right > left ? x[myi] : -x[myi];
    v[myi] = 0;
    v[2*n-myi] = 0;
  }
  cout << sum << endl;
  return 0;
}