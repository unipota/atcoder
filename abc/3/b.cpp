#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
#define r(i,n) for(int i=0;i<n;i++)
#define debug(x) cerr << #x << ": " << x << endl;
using namespace std;

int main(){
  string str1, str2, at = "atcoder";
  cin >> str1 >> str2;
  for(int i=0;i<str1.length();i++){
    if(str1[i] == str2[i])
      continue;
    if(str1[i] == '@')
      if(at.find(str2[i]) != string::npos)
        continue;
    if(str2[i] == '@')
      if(at.find(str1[i]) != string::npos)
        continue;
    cout << "You will lose" << endl;
    return 0;
  }
  cout << "You can win" << endl;
  return 0;
}