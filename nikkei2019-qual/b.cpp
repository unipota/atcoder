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
  int n;
  string s[3];
  cin >> n >> s[0] >> s[1] >> s[2];
  int count = 0;
  r(i,n){
      if(s[0][i]!=s[1][i] && s[1][i]!=s[2][i] && s[2][i]!=s[0][i]){
          count += 2;
          continue;
      }
      if(s[0][i]==s[1][i] && s[1][i]==s[2][i] && s[2][i]==s[0][i]){
          continue;
      }
      count ++;
  }
  cout << count << endl;
  return 0;
}