#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int a,b,x;
    cin>>a>>b;
    for (x=1; x<=min(a,b); x++)
        if (a%x==0 && b%x==0)
            cout<<x<<" ";
    return 0;
}