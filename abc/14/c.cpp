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

#define MAX 1000001

int main(){
  ios::sync_with_stdio(false);
	cin.tie(0);
  int n;
  cin >> n;
  int a[n],b[n];
  int cnt[MAX] = {0};
  r(i,n) cin >> a[i] >> b[i];
  r(i,n) {
    for(int j=b[i];j<=a[i];j++) {
      cnt[j] += 1;
    }
  }
  int max=0;
  r(i,MAX) {
    if(cnt[i]==0) continue;
    cout << cnt[i] << ",";
    max = cnt[i]>max?cnt[i]:max;
  }
  cout << max << endl;
  return 0;
}