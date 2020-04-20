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
#include <string>
#include <sstream>
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
  string s;
  int count = 0;
  int len,c[3];
  bool ng;
  for(int i=1;i<n;i++) {
    s = to_string(i);
    cout << i <<endl;
    len = s.length();
    c[0]=0;c[1]=0;c[2]=0;ng=false;b
    r(j,len){
      switch(s[j]) {
        case '7':c[0]++;break;
        case '5':c[1]++;break;
        case '3':c[2]++;break;
        default:ng=true;
      }
      if(ng)break;
      if(j==len-1&&c[0]>=1&&c[1]>=1&&c[2]>=1) count ++;
    }
  }
  cout << count << endl;
  return 0;
}