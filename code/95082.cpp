#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int sqr(int n){
  return n*n;
}

int main() 
{
    int xa,ya,xb,yb,xc,yc;
    cin>>xa>>ya;
    cin>>xb>>yb;
    cin>>xc>>yc;
    float a,b,c,p,s;
    a=sqrt(sqr(xa-xb)+sqr(ya-yb));
    b=sqrt(sqr(xc-xb)+sqr(yc-yb));
    c=sqrt(sqr(xa-xc)+sqr(ya-yc));
    p=(a+b+c)/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<setprecision(1)<<fixed;
    cout<<s;
    return 0;
}