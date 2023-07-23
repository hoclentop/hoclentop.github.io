#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int i,n, a[1000],k;
    cin>>n>>k;
    for (i=1; i<=n; i++) cin>>a[i];
    sort(a+1, a+n);
    cout<<a[k];
    return 0;
}