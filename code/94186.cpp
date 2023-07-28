#include <iostream>
using namespace std;

int main() 
{
    int n,s,i;
    int a[10000];
    cin>>n;
    s=0;
    for (i=1; i<=n; i++)
        cin>>a[i];
    for (i=1; i<=n; i++)
        s=s+i*a[i];
    cout<<s;
    return 0;
}