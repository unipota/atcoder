#include<iostream>
#define r(i,n) for(int i=0;i<n;i++)
using namespace std;

int H,W;
char f[55][55];
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};

int main(){
  cin >> H >> W;
  r(i,H)r(j,W) cin >> f[i][j];
  r(i,H)r(j,W) if(f[i][j]=='#'){
    int sum = 0;
    r(k,4){
      int y = i+dy[k];
      int x = j+dx[k];
      if(y<0||x<0||y>=H||x>=W) continue;
      if(f[y][x]=='#') sum++;
    }
    if(!sum){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}