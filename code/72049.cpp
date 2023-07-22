#include <iostream>
using namespace std;

int main() 
{
    int n,s,i;
    cin>>n;
    s=0;
    for (i=0;i<=n;i++)
        s=s+i;
    cout<<s;
    return 0;
}