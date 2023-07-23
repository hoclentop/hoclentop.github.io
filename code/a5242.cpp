#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int i,n, a[1000],j;
    cin>>n;
    for (i=1; i<=n; i++) cin>>a[i];
    for (i=1; i<n; i++)
        for (j=i+1; j<=n; j++)
            if (a[i]<a[j]) swap(a[i],a[j]);
    for (i=1; i<=n; i++) cout<<a[i]<<" ";
    return 0;
}