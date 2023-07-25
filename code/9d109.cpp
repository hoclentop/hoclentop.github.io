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
    if ((xa==xb && xc==xd || xa==xc && xb==xd ||xa==xd && xc==xb) &&
    (ya==yb && yc==yd || ya==yc && yb==yd ||ya==yd && yc==yb))
        kt=true;
    if (kt==true)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}