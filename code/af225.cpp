#include <iostream>
using namespace std;
int main()
{
    int i,n, a[1000],s;
    cin>>n;
    for (i=1; i<=n; i++) cin>>a[i];
    s=0;
    for (i=1; i<=n; i++) 
        s+=a[i];
    cout<<s;
    return 0;
}