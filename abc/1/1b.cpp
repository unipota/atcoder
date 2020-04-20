#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int x;
  cin >> x;
  if(x<100){
    cout << "00" << endl;
  }else if(x<=5000){
    if(x<1000){
      cout << '0' << x / 100<< endl;
    }else{
      cout << x / 100 << endl;
    }
  }else if(x>=6000&&x<=30000){
    cout << x / 1000 + 50 << endl;
  }else if(x>=35000&&x<=70000){
    cout << (x / 1000 - 30)/5+80 << endl;
  }else if(x>70000){
    cout << 89 << endl;
  }
  return 0;
}
