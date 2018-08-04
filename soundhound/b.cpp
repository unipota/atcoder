#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#define r(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
  string s;
  int w;
  cin >> s >> w;
  
  int c = s.length()/w;
  if(s.length()%w!=0)
    c++;
  r(i,c){
    cout << s[w*i];
  }
  return 0;
}
