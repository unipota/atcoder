#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
#define r(i,n) for(int i=0;i<n;i++)
#define debug(x) cerr << #x << ": " << x << endl;
using namespace std;

int main(){
  int D,G;
  cin >> D >> G;
  vector<int> p;
  vector<long long> c;
  int input;
  r(i,D){
    cin >> input;
    p.push_back(input);
    cin >> input;
    c.push_back(input);
  }

  
  
  return 0;
}
