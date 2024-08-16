//DE3335.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int n,m,s,f,x,y; int a[100005];
int main() {
    cin>>n;
    for (int i=1; i<=n; i++) cin>>a[i];
    sort(a+1,a+n+1);
    cin>>m;
    for (int i=1; i<=m; i++) {
        cin>>s>>f;
        x=lower_bound(a+1,a+n+1,s)-a;
        y=upper_bound(a+1,a+n+1,f)-a-1;
        if (x>=1 && x<=n && y>=1 && y<=n)
            cout<<y-x+1<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}

