#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#define r(i,n) for(int i=0;i<n;i++)
#define R(i,c,n) for(int i=c;i<n;i++)
#define debug(x) cerr << #x << ": " << x << endl;
using namespace std;
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, -1, 1};
const double PI = 3.14159265358979323846;

int main(){
  ios::sync_with_stdio(false);
	cin.tie(0);
  int r,c;
  cin >> r >> c;
  int s[2];
  cin >> s[0] >> s[1];
  s[0]--;s[1]--;
  int g[2];
  cin >> g[0] >> g[1];
  g[0]--;g[1]--;
  vector<vector<pair<int,int> > > m;
  vector<vector<bool> > flag(r,vector<bool>(c,false));
  m.resize(r);
  string tmp;
  r(i,r) {
    cin >> tmp;
    for(auto &s:tmp){
      if(s=='#'){
        m[i].push_back(make_pair(0,0));
      }else if(s=='.'){
        m[i].push_back(make_pair(1,0));
      }
    }
  }

  queue<pair< pair<int,int> , pair<int,int>* > > st;
  st.push(make_pair(make_pair(s[0],s[1]),&m[s[0]][s[1]]));
  flag[s[0]][s[1]] = true;
  while(!st.empty()){
    pair<int,int> nowP = st.front().first;
    pair<int,int>* nowC = st.front().second;
    st.pop();
    r(i,4){
      if(m[nowP.first+dx[i]][nowP.second+dy[i]].first &&
         !flag[nowP.first+dx[i]][nowP.second+dy[i]]){
        m[nowP.first+dx[i]][nowP.second+dy[i]].second = nowC->second + 1;
        flag[nowP.first+dx[i]][nowP.second+dy[i]] = true;
        st.push(make_pair(make_pair(nowP.first+dx[i],nowP.second+dy[i]),&m[nowP.first+dx[i]][nowP.second+dy[i]]));
      }
    }
  }

  cout << m[g[0]][g[1]].second << endl;

  return 0;
}
