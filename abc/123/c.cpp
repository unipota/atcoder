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

  long double a[6];
  r(i,6) cin >> a[i];

  long double ans = 0;
  long double minx = a[1];
  int mini = 1;
  r(i,5) {
    if(a[i+1]<minx){
      mini = i+1;
      minx = a[i+1];
    }
  }
  ans += ceil(a[0]/a[mini]);
  ans += 4;

  cout << ans << endl;
  return 0;
}