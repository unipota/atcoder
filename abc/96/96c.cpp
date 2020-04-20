#include <iostream>
#include <vector>
#include <string>
using namespace std;

int getNum(vector< vector<int> > f,int x, int y,int w,int h){
  int sum = 0;
  w--;
  h--;
  if(x!=0)
    sum += f[x-1][y];
  if(x!=w)
    sum += f[x+1][y];
  if(y!=0)
    sum += f[x][y-1];
  if(y!=h)
    sum += f[x][y+1];
  return sum;
}

int main(void){
  cout << (1<<3) << endl;

  vector< vector<int> > f;
  int w,h;
  cin >> w >> h;
  f.resize(w);
  for(int i=0;i<h;i++)
    f[i].resize(h);
  char c;
  int x=0;
  int y=0;
  while(cin >> c){
    // cout << c << endl;
    // cout << x << "." << y << endl;
    
    if(c=='.'){
      // cout << "0dayo" << endl;
      f[x][y] = 0;
    }
    if(c=='#'){
      // cout << "1dayo" << endl;
      f[x][y] = 1;
    }
    
    if(x==w-1){
      if(y==h-1)
        break;
      x = 0;
      y ++;
    }else{
      x ++;
    }
    
  }

  int check = 0;
  bool ok = true;
  for(int x=0;x<w;x++){
    for(int y=0;y<h;y++){
      if(f[x][y]){
        // cout << getNum(f,x,y,w,h);
        check = getNum(f,x,y,w,h);
        if(check>0)
          ok = true;
        else
          ok = false;
      }else{
        // cout << "0";
      }
    }
    // cout << endl;
  }

  // if(w==1&&h==1&&f[0][0]==0)
  //   ok = true;
  if(ok)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}