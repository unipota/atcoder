#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
#define r(i,n) for(int i=0;i<n;i++)
#define R(i,c,n) for(int i=c;i<n;i++)
#define debug(x) cerr << #x << ": " << x << endl;
using namespace std;

int trib(vector<int>& t,int n){
  if(t.size()>n)
    return t[n];
  t.push_back((trib(t,n-1) + trib(t,n-2) + trib(t,n-3))%10007);
  return t[n];
}

int main(){
  int n;
  cin >> n;
  vector<int> t;
  t.push_back(0);
  t.push_back(0);
  t.push_back(1);
  cout << trib(t, n-1) % 10007 << endl;
  return 0;
}