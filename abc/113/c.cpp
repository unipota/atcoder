#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <map>
#define r(i,n) for(int i=0;i<n;i++)
#define R(i,c,n) for(int i=c;i<n;i++)
#define debug(x) cerr << #x << ": " << x << endl;
using namespace std;

struct hoge {
  int id;
  int p;
  int y;
};

int main(){
  int n,m;
  cin >> n >> m;
  struct hoge h[m];
  vector<vector<int>> pl (n, vector<int>(0));
  
  r(i,m){
    h[i].id = i;
    cin >> h[i].p >> h[i].y;
    pl[h[i].p-1].push_back(h[i].y);
  }

  vector<map<int,int>> px (n, map<int,int>{});
  r(i,n){
    sort(pl[i].begin(),pl[i].end());
    r(j,pl[i].size()){
      px[i].emplace(pl[i][j],j);
    }
  }

  r(i,m){
    cout << setfill('0') << setw(6) << right;
    cout << h[i].p;
    cout << setfill('0') << setw(6) << right;
    cout << px[h[i].p-1].at(h[i].y) + 1;
    cout << endl;
  }

  return 0;
}