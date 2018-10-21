#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
#define r(i,n) for(int i=0;i<n;i++)
#define debug(x) cerr << #x << ": " << x << endl;
using namespace std;

int main(){
  int N,sum = 0;
  cin >> N;
  for(int i=1;i<=N;i++){
    sum += i*10000;
  }
  cout << sum/N << endl;
  return 0;
}