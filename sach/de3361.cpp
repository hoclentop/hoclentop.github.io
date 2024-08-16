//DE3361.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int n,q;
int x[100005];
int main() {
    cin>>n>>q;
    int i,j,a,b;
    for (i=1; i<=n; i++) cin>>x[i];
    sort(x+1,x+n+1);
    for (int t=1; t<=q; t++) {
        cin>>a>>b;
        i=lower_bound(x+1,x+n+1,a)-x;
        j=upper_bound(x+1,x+n+1,b)-x;
        cout<<j-i<<endl;
    }
    return 0;
}

