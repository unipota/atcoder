#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
#define r(i,n) for(int i=0;i<n;i++)
#define debug(x) cerr << #x << ": " << x << endl;
using namespace std;

#define LL long long int
LL gcd(LL a, LL b) { if (a%b == 0) { return b; } else return gcd(b, a%b); }
LL lcm(LL a, LL b) { return a / gcd(a, b)*b; }

int main(){
  long long int N,input;
  cin >> N;
  vector<int> a;
  r(i,N){
    cin >> input;
    a.push_back(input);
  }

  int max =  *max_element(a.begin(),a.end());
  // int m = max*2-1;
  long long int l = 0;
  r(i,N-1){
    l += lcm(a[i],a[i+1]);
  }
  int fmax=0;

  r(k,l){

  int f=0;
  r(i,N){
    f += (k+1)%a[i];
  }
  if(f>fmax){
    fmax = f;
  }

  cout << k+1 << ":" << fmax << endl;

  }

  cout << fmax << endl;

  return 0;
}