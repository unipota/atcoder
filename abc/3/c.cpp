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
  int n,k,tmp;
  double rate = 0.0;
  cin >> n >> k;
  vector<int> r;
  r(i,n) {
    cin >> tmp;
    r.push_back(tmp);
  }
  sort(r.begin(), r.end());
  for(auto it = r.begin() + (n-k);it != r.end();++it){
    rate = (rate+*it)/2;
  }
  cout << fixed;
  cout << setprecision(6) << rate << endl;
  return 0;
}