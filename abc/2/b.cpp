#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
#define r(i,n) for(int i=0;i<n;i++)
#define debug(x) cerr << #x << ": " << x << endl;
using namespace std;

int main(){
  string str;
  cin >> str;
  string ban = "aiueo";
  for(auto&& e : str) {
    if(ban.find(e) == string::npos)
      cout << e;
  }
  cout << endl;
  return 0;
}