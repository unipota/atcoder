#include <bits/stdc++.h>
#define r(i,n) for(int i=0;i<n;i++)
#define re(i,n) for(int i=0;i<=n;i++)
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

int getSum(int n){
    int sum = 0;
    while(n!=0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n,a,b;
  cin >> n >> a >> b;
  int ans = 0;
  re(i,n) {
      int tmp = getSum(i);
      if(tmp>=a&&tmp<=b) ans += i;
  }
  cout << ans << endl;
  return 0;
}