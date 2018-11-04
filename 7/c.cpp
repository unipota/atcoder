#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
#define r(i,n) for(int i=0;i<n;i++)
#define R(i,c,n) for(int i=c;i<n;i++)
#define debug(x) cerr << #x << ": " << x << endl;
using namespace std;

int main(){
  int r,c;
  cin >> r >> c;
  int s[2];
  cin >> s[0] >> s[1];
  int g[2];
  cin >> g[0] >> g[1];
  int m[r][c][2];
  r(i,r) r(j,c) cin >> m[i][j][0] >> m[i][j][1];


  return 0;
}
