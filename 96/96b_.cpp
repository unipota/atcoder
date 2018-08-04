#include<iostream>
#include <vector>
#include <algorithm>
#define r(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
  vector<int> v(3);
  r(i,3) cin>>v[i];
  sort(v.begin(),v.end());
  cout << v[0] << v[1] << v[2] << endl;
  return 0;
}

