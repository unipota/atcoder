#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
#define r(i,n) for(int i=0;i<n;i++)
#define debug(x) cerr << #x << ": " << x << endl;
using namespace std;

int main(){
  int r;
  cin >> r;
  if(r<1200){
    cout << "ABC";
  }else if(r<2800){
    cout << "ARC";
  }else{
    cout << "AGC";
  }
  cout << endl;

  return 0;
}