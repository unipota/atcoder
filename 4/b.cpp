#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
#define r(i,n) for(int i=0;i<n;i++)
#define debug(x) cerr << #x << ": " << x << endl;
using namespace std;

int main(){
  // vector<vector<char>> m(4, vector<char>(4));
  char c[4][4];
  r(i, 4) r(j, 4) cin >> c[i][j];
  r(i, 4) r(j,4) cout << c[3-i][3-j] << (j==3 ? '\n' : ' ');
  return 0;
}