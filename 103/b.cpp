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

  r(i,s1.length()){
    if(s1==s2){
      cout << "Yes" << endl;
      return 0;
    }
    s1.insert(s1.begin(),s1[s1.length()-1]);
    s1.pop_back();
  }
  cout << "No" << endl;

  return 0;
}