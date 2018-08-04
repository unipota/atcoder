#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
#define r(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
  long long int n,m,d;
  cin >> n >> m >> d;

  long long int c = 0;
  for(long long int i=1;i<=n;i++){
    if(d==0){
      c++;
      continue;
    }
    if(i+d<=n)
      c++;
    if(i-d>=1)
      c++;
  }
  long double r = 0.0;
  r = (long double)c*(m-1);
  cout << c <<endl;
  r /= (n*n);
  cout << fixed;
  cout << setprecision(6) << r << endl;

  return 0;
}
