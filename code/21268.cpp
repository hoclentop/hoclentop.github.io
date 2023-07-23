#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i,n, a[1000],b[1000];
    cin>>n;
    for (i=1; i<=n; i++) cin>>a[i];
    b[1]=a[1];
    for (i=2; i<=n; i++)
        b[i]=max(b[i-1],a[i]);
    for (i=1; i<=n; i++)
        cout<<b[i]<<" ";
    return 0;
}