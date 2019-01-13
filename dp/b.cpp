#include <bits/stdc++.h>
#define r(i,n) for(int i=0;i<n;i++)
#define R(i,c,n) for(int i=c;i<n;i++)
#define DEBUG(x) cerr << #x << ": " << x << endl;
#define DUMP(a) REP(d,a.size()){cout<<a[d];if(d!=a.size()-1)cout<<" ";else cout<<endl;}
#define ALL(v) v.begin(),v.end()
#define UNIQUE(v)  sort(ALL(v));v.erase(unique(ALL(v)),v.end());
#define pb push_back
using namespace std;
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, -1, 1};
const double PI = 3.14159265358979323846;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n,k;
  cin >> n >> k;
  int h[n];
  r(i,n) cin >> h[i];
  int cost[n] = {0};
  int minv;
  r(i,n) {
    minv = 10000;
    for(int j=0; j < min(i,k); j++) {
      minv = minv > cost[i-k] + abs(h[i]-h[i-k]) ? cost[i-k] + abs(h[i]-h[i-k]) : minv;
    }
    cost[i] = minv;
    cout << cost[i] << endl;
  }
  cout << cost[n-1] << endl;
  return 0;
}