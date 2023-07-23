#include <iostream>
using namespace std;
int main()
{
    int i,n, a[1000];
    cin>>n;
    for (i=1; i<=n; i++) cin>>a[i];
    int dem=0;
    for (i=1; i<=n; i++) {
        int s=0;
        for (int j=i; j<=n; j++) {
            s+=a[j];
            if (s==0) dem++;
        }
    }
    cout<<dem;
    return 0;
}