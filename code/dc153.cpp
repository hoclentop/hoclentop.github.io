#include <iostream>
using namespace std;

int main() 
{
    int a,b,t,x;
    cin>>a>>b;
    t=1;
    for (x=1; x<=b; x++)
        t=t*a;
    int c=t%1000;
    if (c>100) cout<<c;
    if (c<10)
        cout<<"00"<<c;
    if (c<100 && c>10)
        cout<<"0"<<c;
    if (c==0) cout<<"000";
    return 0;
}