//DE3308.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int n,dem=0, a[100001], b[100001];
int main() {
    int i,j=1;
    cin>>n;
    for (i=1; i<=n; i++) cin>>b[i];
    for (i=1; i<=n; i++) cin>>a[i];
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);
    for (i=1; i<=n; i++)
        if (b[i]>a[j]) {
            dem++;
            j++;
        }
    cout<<dem;
    return 0;
}

