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

int main(){
  ios::sync_with_stdio(false);
	cin.tie(0);
  int a[3];
  int b[3];
  int count[4] = {0};
  r(i,3) cin >> a[i] >> b[i];
  r(i,3){
    count[a[i]-1] ++;
    count[b[i]-1] ++;
  }
  int cn1=0,cn2=0;
  r(i,4){
    if(count[i]==1) cn1 ++;
    if(count[i]==2) cn2 ++;
  }
  if (cn1==2&&cn2==2) cout << "YES" <<endl;
  else cout << "NO" << endl;
  return 0;
}