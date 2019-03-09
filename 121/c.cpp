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

  int n,m;
  cin >> n >> m;
  vector<pair<long long ,long long>> p(n);
  r(i,n) {
    int a,b;
    cin >> a >> b;
    p[i] = make_pair(a,b);
  }
  sort(ALL(p));
  long long sum = 0;
  long long counti = 0;
  r(i,n) {
    if (p[i].second <= m-counti) {
      sum += p[i].first * p[i].second;
      counti += p[i].second;
      continue;
    }else{
      sum += p[i].first * (m-counti);
      break;
    }
  }
  cout << sum << endl;

  return 0;
}