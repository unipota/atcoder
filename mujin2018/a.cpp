#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
#define r(i,n) for(int i=0;i<n;i++)
#define debug(x) cerr << #x << ": " << x << endl;
using namespace std;

int main(){
  string s;
  cin >> s;

  if(s.substr(0,5)=="MUJIN"){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }

  return 0;
}