#include <iostream>
using namespace std;
int main()
{
    int i,n,j, a[1000],smax,dem,v;
    cin>>n;
    for (i=1; i<=n; i++) cin>>a[i];
    smax=0;
    for (i=1; i<=n; i++) {
        dem=0;
        for (j=1; j<=n; j++)
            if (a[j]==a[i]) dem++;
        if (smax < dem) {
            v=a[i];
            smax=dem;
        }
    }
    cout<<v<<" "<<smax;
    return 0;
}