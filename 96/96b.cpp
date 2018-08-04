#include <iostream>
#include <vector>
using namespace std;

int getMax(int a,int b,int c){
  if(a>b){
    if(a>c)
      return 0;
    else
      return 2;
  }else{
    if(b>c)
      return 1;
    else
      return 2;
  }
}

int main(void){
  int x[3];
  cin >> x[0] >> x[1] >> x[2];
  int k;
  cin >> k;
  int sum = 0;
  for(int i=0;i<k;i++){
    x[getMax(x[0],x[1],x[2])] *= 2;
  }
  sum = x[0] + x[1] + x[2];
  cout << sum << endl;
  return 0;
}