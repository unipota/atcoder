#include <bits/stdc++.h>
#define r(i,n)    for(int i=0;i<n;i++)
#define R(i,c,n)  for(int i=c;i<n;i++)
#define DEBUG(x)  cerr << #x << ": " << x << endl;
#define ALL(v)    v.begin(),v.end()
#define pb        push_back
using namespace std;
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, -1, 1};
const double PI = 3.14159265358979323846;

int main(){
  ios::sync_with_stdio(false);
	cin.tie(0);
  int n;
  cin >> n;
  vector<int> coin(n);
  // vector<bool> reset(n, true);
  // vector<bool> isFront(n, true);
  r(i,n) cin >> coin[i];

  // sort(coin.begin(),coin.end());
  // double frontcount = 0;
  // double num = 0;
  // do {
  //   num ++;
  //   isFront = reset;
  //   for(auto &c:coin) cout << c << " "; cout << "\n";
    // r(i,n-1) {
    //   r(j,n-i-1) {
    //     if(coin[i+j+1]%coin[i]==0){
    //       isFront[i+j+1] = !isFront[i+j+1];
    //     }
    //   }
    // }
    // for(const auto& b:isFront) cout << (b?"T":"F") << " ";cout << endl;
  //   frontcount += count(ALL(isFront),true);
  // } while(next_permutation(coin.begin(),coin.end()));
  // cout << count << "," << num << endl;
  int y_count = 0;
  double answer = 0;
  r(i,n){
    y_count = 0;
    r(j,n){
      if(i==j) continue;
      if(coin[i]%coin[j]==0) y_count ++;
    }
    answer += y_count%2==0 ? y_count==0 ? 1 : double(y_count+2)/double(2*y_count+2) : .5;
  }

  std::cout << std::fixed;
  std::cout << std::setprecision(6);
  cout << answer << "\n";
  return 0;
}
