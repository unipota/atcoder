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

int atoi(char c) {
  return c-48;
}

int main(){
  ios::sync_with_stdio(false);
	cin.tie(0);
  string S;
  cin >> S;
  int tmp;
  char tmpc;
  int goal = 753;
  int min = 999;
  int index = 0;
  for(int i=0;i<S.length()-2;i++){
    if (abs(goal - atoi(S[i])*100-atoi(S[i+1])*10-atoi(S[i+2]))<min) {
      min = abs(goal - atoi(S[i])*100-atoi(S[i+1])*10-atoi(S[i+2]));
      index = i;
    }
  }
  cout << abs(goal - atoi(S[index])*100-atoi(S[index+1])*10-atoi(S[index+2])) << endl;
  return 0;
}