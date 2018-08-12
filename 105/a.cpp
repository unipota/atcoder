#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
#define r(i,n) for(int i=0;i<n;i++)
#define debug(x) cerr << #x << ": " << x << endl;
using namespace std;

int main(){

  int n,k;
  cin >> n >> k;

  if(n%k!=0){
    cout << 1 << endl;
  }else{
    cout << 0 << endl;
  }
  
  return 0;
}
