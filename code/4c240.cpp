#include <iostream>
using namespace std;
int main()
{
    int i,n,j, a[1000],dem,k,t;
    cin>>n>>k;
    for (i=1; i<=n; i++) cin>>a[i];
    dem=0;
    for (i=1; i<n-1; i++) 
        for (j=i+1; j<n; j++)
            for (t=j+1; t<=n; t++)
                if (a[i]+a[j]+a[t]==k) dem++;
    cout<<dem;
    return 0;
}