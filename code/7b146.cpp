#include <iostream>
using namespace std;

int main() 
{
    int n,x,t;
    cin>>n;
    t=1;
    for (x=1; x<=n; x++)
        t=t*x;
    cout<<t;
    return 0;
}