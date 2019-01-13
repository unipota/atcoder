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

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<int> a1;//宣言
  vector<int> a2(123)//初期要素123
  vector<int> a3(10,123)//要素数10,初期要素123
  vector<int> a4{1,2,3}//データ指定して初期化
  
  return 0;
}