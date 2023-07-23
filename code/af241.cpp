#include <iostream>
using namespace std;
int main()
{
    int i,n, a[1000],v,k;
    cin>>n;
    for (i=1; i<=n; i++) cin>>a[i];
    cin>>v>>k;
    for (i=0; i<k; i++) cout<<a[v+i]<<" ";
    return 0;
}