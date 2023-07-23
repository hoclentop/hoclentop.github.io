#include <iostream>
using namespace std;
int main()
{
    int i,n, a[1000],j;
    cin>>n;
    for (i=1; i<=n; i++) cin>>a[i];
    int dem=0;
    for (i=1; i<n; i++)
        for (j=i+1; j<=n; j++)
            if (a[i]==a[j]) dem++;
    cout<<dem;
    return 0;
}