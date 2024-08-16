//DE3328.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int n,m, a[200001],b[200001];
int main()
{
    cin>>n>>m;
    for (int i=1; i<=n; i++) cin>>a[i];
    for (int i=1; i<=n; i++) cin>>b[i];
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);
    int tmin=a[n]+b[n];
    int t, tmax=0;
    for (int i=m; i>=1; i--) {
        t=a[n-m+i]+b[n+1-i];
        if (t>tmax) tmax=t;
        if (t<tmin) tmin=t;
    }
    cout<<tmin<<" "<<tmax-tmin;
    return 0;
}

