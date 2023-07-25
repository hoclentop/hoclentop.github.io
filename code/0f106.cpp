#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int sqr(int n){
  return n*n;
}

int main() 
{
    int xa,ya,xb,yb,xc,yc,xd,yd;
    cin>>xa>>ya;
    cin>>xb>>yb;
    cin>>xc>>yc;
    cin>>xd>>yd;
    float a,b,c,d1,d2,p1,p2,s1,s2;
    a=sqrt(sqr(xa-xb)+sqr(ya-yb));//ab
    b=sqrt(sqr(xc-xb)+sqr(yc-yb));//bc
    c=sqrt(sqr(xa-xc)+sqr(ya-yc));//ac
    a=int(a);
    b=int(b);
    c=int(c);
    if (a+c==b || a+b==c || b+c==a)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}