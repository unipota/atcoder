#include <iostream>
#include <iomanip>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cmath>
#include <algorithm>
#include <iterator>
#define r(i, n) for (int i = 0; i < n; i++)
#define R(i, c, n) for (int i = c; i < n; i++)
#define DEBUG(x) cerr << #x << ": " << x << endl;
#define DUMP(a)            \
  REP(d, a.size())         \
  {                        \
    cout << a[d];          \
    if (d != a.size() - 1) \
      cout << " ";         \
    else                   \
      cout << endl;        \
  }
#define ALL(v) v.begin(), v.end()
#define UNIQUE(v) \
  sort(ALL(v));   \
  v.erase(unique(ALL(v)), v.end());
#define pb push_back
using namespace std;
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, -1, 1};
const double PI = 3.14159265358979323846;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, q;
  cin >> n >> q;
  string a;
  cin >> a;
  vector<int> ll(q);
  vector<int> rr(q);
  r(i, q)
  {
    cin >> ll[i] >> rr[i];
  }
  int offset = 0;
  int count = 0;
  vector<int> startP;
  vector<int> foo(n,0);
  // while (a.find("AC", offset) != string::npos)
  // {
  //   count++;
  //   startP.push_back(a.find("AC", offset));
  //   offset += 2;
  // }

  r(i,n){
    if (i>0 && a[i]=='C' && a[i-1]=='A') {
      foo[i] = foo[i-1] + 1;
    }else{
      if (i==0) {
        foo[i] = 0;
      }else{
        foo[i] = foo[i-1];
      }
    }
  }
  r(i,q){
    cout << foo[rr[i]-1] - foo[ll[i]-1] << endl;
  }

  return 0;
}