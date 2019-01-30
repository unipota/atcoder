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
  cin >> n;
  vector<long long int> a(n,0);
  vector<long long int> b(n,0);
  vector<bool> flag(n,false);
  r(i,n) cin >> a[i] >> b[i];
  int ac,bc=0;
  r(i,n){
      if(i%2==0){
          long long int maxn = 0;
          long long int maxh = 0;
          int index=0;
          int indexh=0;
          r(j,n){
              if(flag[j]) {
                  index++;
                  continue;
              }
              if(maxn<a[j]-b[j]){
                  index = j;
                  maxn = a[j]-b[j];
              }
              if(maxh<a[j]){
                  indexh = j;
                  maxh = a[j];
              }
          }
          if(maxn==0){
              ac+=maxh;
              cout << maxh << endl;
              flag[indexh] = true;
          }else{
              ac+=a[index];
              cout << a[index] << endl;
              flag[index] = true;
          }
      }else{
          long long int maxn = 0;
          long long int maxh = 0;
          int index=0;
          int indexh=0;
          r(j,n){
              if(flag[j]) {
                  index ++;
                  continue;
              }
              if(maxn<b[j]-a[j]){
                  index = j;
                  maxn = b[j]-a[j];
              }
              if(maxh<b[j]){
                  maxh = b[j];
                  indexh = j;
              }
          }
          if(maxn==0){
              bc += maxh;
              cout << maxh << endl;
              flag[indexh] = true;
          }else {
              bc += b[index];
              cout << b[index] << endl;
              flag[index] = true;
          }
      }
  }
  cout << ac - bc << endl;
  return 0;
}