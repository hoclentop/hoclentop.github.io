//DE3346.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
long long n, a[1002];
int main() {
    cin>>n;
    int i,j, d; long long k, dem=0;
    for (i=1; i<=n; i++) cin>>a[i];
    sort(a+1, a+n+1);
    for (i=1; i<=n; i++) a[i]*=a[i];
    for (i=1; i<=n-2; i++)
        for (j=i+1; j<=n-1; j++) {
            k=a[i]+a[j];
            d=lower_bound(a+j+1, a+n+1, k) - a;
            while (d<=n && a[d]==k) {
                dem++;
                d++;
            }
        }
    cout<<dem;
}

