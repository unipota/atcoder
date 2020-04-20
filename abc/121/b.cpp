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

  int n,m,c;
  cin >> n >> m >> c;
  int b[m];
  r(i,m) cin >> b[i];
  int a[n][m];
  r(i,n) r(j,m) cin >> a[i][j];
  int cnt = 0;
  int result;
  r(i,n) {
    result = 0;
    r(j,m) {
      result += b[j] * a[i][j];
    }
    result += c;
    if (result>0) cnt ++;
  }
  cout << cnt << endl;

  return 0;
}