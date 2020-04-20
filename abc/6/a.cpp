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
  if(n%3==0 || to_string(n).find('3') != string::npos)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}