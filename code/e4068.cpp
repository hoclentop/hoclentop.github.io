#include <iostream>
using namespace std;

int main() 
{
    int xa,ya,xb,yb,xc,yc;
    int xd,yd;
    cin>>xa>>ya;
    cin>>xb>>yb;
    cin>>xc>>yc;
    xd=xa+xc-xb;
    yd=ya+yc-yb;
    cout<<xd<<" "<<yd;
    return 0;
}