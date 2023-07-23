#include <iostream>
using namespace std;
int main()
{
    int i,n, a[1000],v;
    cin>>n;
    for (i=1; i<=n; i++) cin>>a[i];
    v=1;
    for (i=2; i<=n; i++) 
        if (a[i]<a[v]) v=i;
    cout<<a[v]<<" "<<v;
    return 0;
}