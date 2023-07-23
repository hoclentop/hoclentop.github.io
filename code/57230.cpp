#include <iostream>
using namespace std;
int main()
{
    int i,n, a[1000],sln;
    cin>>n;
    for (i=1; i<=n; i++) cin>>a[i];
    sln=a[1];
    for (i=1; i<=n; i++) 
        if (a[i]>sln) sln=a[i];
    cout<<sln<<endl;
    for (i=1; i<=n; i++)
        if (a[i]==sln) cout<<i<<" ";
    return 0;
}