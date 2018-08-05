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
  //'a':97

  if(s[0]=='A'){
    s.erase(s.begin());
    if(s.substr(1,s.length()-2).find("C")!=string::npos){
      s.erase(s.begin()+s.substr(1,s.length()-2).find("C")+1);
      if(s.substr(1,s.length()-2).find("C")==string::npos){
        for(int i=0;i<s.length();i++){
          if(s[i]<97){
            cout << "WA" << endl;
            return 0;
          }
        }
        cout << "AC" << endl;
        return 0;
      }
    }
  }
  cout << "WA" << endl;
  return 0;
}