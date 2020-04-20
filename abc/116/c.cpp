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

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  vector<int> flowers(n+1,0);
  r(i,n) cin >> flowers[i];
  n++;
  int begin = 0;
  int count = 0;
  bool flag = false;
  while(true){
      flag = false;
      for(int i=begin;i<n;i++){
          if(flowers[i]>0){
              flowers[i]--;
              flag = true;
          }else{
              if(flowers[begin]==0) begin ++;
              break;
          }
      }
      if(flag) count ++;
      if(begin >= n-1) break;
  }
  cout << count << endl;
  
  return 0;
}