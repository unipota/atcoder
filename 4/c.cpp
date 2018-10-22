#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
#define r(i,n) for(int i=0;i<n;i++)
#define R(i,c,n) for(int i=c;i<n;i++)
#define debug(x) cerr << #x << ": " << x << endl;
using namespace std;

void _swap(vector<int>& l, int i, int j) {
  swap(l[i], l[j]);
}

int main(){
  vector<int> c = {1,2,3,4,5,6};
  int n;
  cin >> n;
  r(i,n%30)
    _swap(c,i%5,i%5+1);
  for(auto& e:c)
    cout << e;
  cout << endl;
  return 0;
}