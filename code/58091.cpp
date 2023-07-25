#include <iostream>
using namespace std;

bool nhuan(int a)
{
    if ((a%4==0 && a%100!=0)||(a%400==0)){
      return true;
    }
    return false;
}

int main(){
  int a,b;
  cin>>a>>b;
  if ((a==1)||(a==3)||(a==5)||(a==7)||(a==8)||(a==10)||(a==12)){
    cout<<31;
  }
  else if ((a==4)||(a==6)||(a==9)||(a==11)){
    cout<<30;
  }
  else if (a=2 && nhuan(b))
      cout<<29;
  else
      cout<<28;
}