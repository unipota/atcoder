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

struct diff {
  int index;
  int value;
  bool operator<( const diff& right ) const {
    return value < right.value;
  }
};

bool sortByIndex( const diff& left, const diff& right ) {
    return left.index < right.index;
}

bool sortByValue( const diff& left, const diff& right ) {
    return left.value < right.value;
}

int main(){
  ios::sync_with_stdio(false);
	cin.tie(0);
  int n,m;
  cin >> n >> m;
  vector<int> x(m,0);
  r(i,m) cin >> x[i];
  if(n>m) {
    cout << 0 << endl;
    return 0;
  }
  sort(ALL(x));
  vector<struct diff> diff(m-1);
  r(i,m-1){
    diff[i].index = i;
    diff[i].value = abs(x[i+1]-x[i]);
  }
  sort(ALL(diff),sortByValue);
  int count = 0;
  r(i,m-n) count += diff[i].value;
  cout << count << endl;

  return 0;
}