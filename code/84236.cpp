#include <iostream>
using namespace std;
int main()
{
    int i,n, a[1000],k,dem;
    cin>>n;
    for (i=1; i<=n; i++) cin>>a[i];
    cin>>k;
    dem=0;
    for (i=1; i<=n; i++) 
        if (a[i]==k)
            dem++;
    cout<<dem;
    return 0;
}