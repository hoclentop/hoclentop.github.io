#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    float xa,ya,xb,yb,x,y;
    cin>>xa>>ya;
    cin>>xb>>yb;
    x=(xa+xb)/2;
    y=(ya+yb)/2;
    cout<<setprecision(1)<<fixed;
    cout<<x<<" "<<y;
    return 0;
}