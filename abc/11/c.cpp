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

bool check(int *ng, int n) {
  return n==ng[0] || n==ng[1] || n==ng[2];
}

int main(){
  ios::sync_with_stdio(false);
	cin.tie(0);
  int n,ng[3];
  cin >> n;
  r(i,3) cin >> ng[i];
  r(i,100) {
    if(n==0) break;
    if(check(ng,n)) break;
    if(!check(ng,n-3) && n>=3){
      n -= 3;
    } else if(!check(ng,n-2) && n>=2){
      n -= 2;
    } else if(!check(ng,n-1) && n>=1){
      n -= 1;
    } else {
      break;
    }
  }
  cout << (n==0?"YES":"NO") << endl;
  return 0;
}