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

  int a[5];
  r(i,5) cin >> a[i];

  int ans = 0;
  int hoge = 0;
  int minhoge = 10;
  r(i,5){
    if(a[i]%10!=0){
      if(a[i]%10<minhoge){
        hoge = i;
        minhoge = a[i]%10;
      }
    }
  }
  r(i,5){
    if(i==hoge) continue;
    if(a[i]%10!=0){
      ans += 10 * (a[i]/10+1);
    }else{
      ans += a[i];
    }
  }
  ans += a[hoge];
  cout << ans << endl;

  return 0;
}