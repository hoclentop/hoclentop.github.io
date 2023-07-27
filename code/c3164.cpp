#include <iostream>
using namespace std;

int main() 
{
    int a,b,t,x;
    cin>>a>>b;
    t=1;
    for (x=1; x<=b; x++)
        t=t*a;
    t=t%10;
    cout<<t;
    return 0;
}