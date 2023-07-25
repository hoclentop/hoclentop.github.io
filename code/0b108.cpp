#include <iostream>
using namespace std;

int main() 
{
    int xa,xb,xc,xd,ya,yb,yc,yd;
    bool kt=false;
    cin>>xa>>ya;
    cin>>xb>>yb;
    cin>>xc>>yc;
    cin>>xd>>yd;
    if (xa+xb==xc+xd && ya+yb==yc+yd)
        kt=true;
    if (xa+xc==xb+xd && ya+yc==yb+yd)
        kt=true;
    if (xa+xd==xb+xc && ya+yd==yb+yc)
        kt=true;
    if (kt==true)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}