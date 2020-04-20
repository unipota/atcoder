#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
#define r(i,n) for(int i=0;i<n;i++)
#define debug(x) cerr << #x << ": " << x << endl;
using namespace std;

int main(){
  string s1,s2;
  cin >> s1 >> s2;

  if((s1+s1).find(s2)>=0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}