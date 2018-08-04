#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
#define r(i,n) for(int i=0;i<n;i++)
#define debug(x) cerr << #x << ": " << x << endl;
using namespace std;

int main(){
  int a;
  string s;
  cin >> a >> s;
  r(i,s.length()){
    if(a==0){
      cout << "Yes" << endl;
      return 0;
    }
    if(s[i]=='+')
      a ++;
    if(s[i]=='-')
      a--;
    if(a==0){
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}