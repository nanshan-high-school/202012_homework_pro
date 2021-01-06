#include <iostream>
using namespace std;

int main(){
  int num, i, year=2021;
  cin >> num;
  int line=num/19, word=num%19;
  for(i=0; i<line; i++){
    cout << year << " Happy New Year" << endl;
    year--;
  }
  string str="     Happy New Year";
  str[0]=year/1000+48;
  str[1]=year/100%10+48;
  str[2]=year/10%10+48;
  str[3]=year%10+48;
  for(i=0; i<word; i++)
    cout << str[i];
}
