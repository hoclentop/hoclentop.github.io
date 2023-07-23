#include <iostream>
using namespace std;
int main()
{
    int i,n, a[1000],k,dmax;
    cin>>n;
    for (i=1; i<=n; i++) cin>>a[i];
    cin>>k;
    dmax=-1;
    for (i=1; i<=n; i++) 
        if (a[i]<=k && a[i]>dmax)
            dmax=a[i];
    cout<<dmax;
    return 0;
}