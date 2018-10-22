#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[]) {
  int deg,dis;
  vector<string> d = {"N","NNE","NE","ENE","E","ESE","SE","SSE","S","SSW","SW","WSW","W","WNW","NW","NNW"};
  vector<int> w = {-1,2,15,33,54,79,107,138,171,207,244,284,326,2000};

  cin >> deg >> dis;

  int ms = round(dis / 6.0);
  int x,y;

  deg *= 10;

  if(deg < 1125 || deg >= 34875)
    x = 0;
  else {
    x = (deg - 1125) / 2250 + 1;
  }

  for(int i=1;i<w.size()+1;i++){
    if(ms > w[i-1] && ms <= w[i]){
      y = i;
      break;
    }
  }
  
  cout << ((y-1)!=0?d[x]:"C") << " " << y-1 << endl;
  return 0;
}
