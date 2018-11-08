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
  map<string,int> vote;
  string tmp;
  r(i,n){
    cin >> tmp;
    if(vote.count(tmp))
      vote[tmp] ++;
    else
      vote.emplace(tmp,1);
  }
  string name;
  int max=-1;
  for(auto& v:vote){
    if(v.second>max){
      max = v.second;
      name = v.first;
    }
  }
  cout << name << endl;

  return 0;
}