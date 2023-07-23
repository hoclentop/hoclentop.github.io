#include <iostream>
using namespace std;
int main()
{
    int i,n, a[1000],dem;
    cin>>n;
    for (i=1; i<=n; i++) cin>>a[i];
    dem=0;
    for (i=1; i<=n; i++) 
        if (a[i]%2==0) {
            dem++;
        }
    cout<<dem;
    return 0;
}