#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    float xa,ya,xb,yb,xc,yc,x,y;
    cin>>xa>>ya;
    cin>>xb>>yb;
    cin>>xc>>yc;
    x=(xa+xb+xc)/3;
    y=(ya+yb+yc)/3;
    cout<<setprecision(1)<<fixed;
    cout<<x<<" "<<y;
    return 0;
}