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

int func(int a){
    return a%2==0 ? a/2 : 3*a+1;
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);

  int s;
  cin >> s;
  vector<int> v;
  
  int count = 1;
  int tmp=0;
  while(true){
    if(count == 1){
        v.push_back(s);
        count ++;
        continue;
    }else{
        tmp = func(v.back());
    }
    if(find(v.begin(),v.end(),tmp) != v.end()){
        break;
    }
    count ++;
    v.push_back(tmp);
  }
  cout << count << endl;
  
  return 0;
}