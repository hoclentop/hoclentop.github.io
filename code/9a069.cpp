#include <iostream>
using namespace std;

int main() 
{
    int a,b;
    cin>>a>>b;
    for (int x=1; x<=min(a,b); x++)
        if (a%x==0 && b%x==0)
            cout<<x<<" ";
    return 0;
}