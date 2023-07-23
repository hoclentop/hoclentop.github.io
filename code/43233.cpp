#include <iostream>
using namespace std;
int main()
{
    int i,n,j, a[1000],dem,d;
    cin>>n;
    for (i=1; i<=n; i++) cin>>a[i];
    dem=0;
    for (i=1; i<=n; i++) {
        d=0;
        for (j=1; j<=n; j++)
            if (a[j]==a[i]) d++;
        if (d==1) dem++;
    }
    cout<<dem;
    return 0;
}