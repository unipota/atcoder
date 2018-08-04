#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[]) {
  int deg,dis;
  vector<string> d = {"N","NNE","NE","ENE","E","ESE","SE","SSE","S","SSW","SW","WSW","W","WNW","NW","NNW"};

  cin >> deg >> dis;

  int ms = round(dis / 6.0);
  int lv = 100;

  if(ms>=0&&ms<=2){
    lv = 0;
  }else
  if(ms>=3&&ms<=15){
    lv = 1;
  }else
  if(ms>=16&&ms<=33){
    lv = 2;
  }else
  if(ms>=34&&ms<=54){
    lv = 3;
  }else
  if(ms>=55&&ms<=79){
    lv = 4;
  }else
  if(ms>=80&&ms<=107){
    lv = 5;
  }else
  if(ms>=108&&ms<=138){
    lv = 6;
  }else
  if(ms>=139&&ms<=171){
    lv = 7;
  }else
  if(ms>=172&&ms<=207){
    lv = 8;
  }else
  if(ms>=208&&ms<=244){
    lv = 9;
  }else
  if(ms>=245&&ms<=284){
    lv = 10;
  }else
  if(ms>=285&&ms<=326){
    lv = 11;
  }else
  if(ms>=327){
    lv = 12;
  }


  if(lv!=0){
    cout << d[(int)((deg+125) / 225)] << " ";
  }else{
    cout << "C ";
  }
  cout << lv << endl;

  return 0;
}
