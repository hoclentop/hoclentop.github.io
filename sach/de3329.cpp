//DE3329.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int n,s, a[201], x[201], y[201]; bool stop = false;
void thu(int i, int t) {
    if (i>n) {
        if (s==t) {
            stop=true;
            copy(x,x+n+1, y);
        }
        return ;
    }
    if (stop) return;
    for (int v=0; v<=1; v++) {
        x[i]=v;
        thu(i+1, t+v*a[i]);
    }
}
int main() {
    cin>>n>>s;
    for (int i=1; i<=n; i++) cin>>a[i];
    thu(1,0);
    if (stop) {
        cout<<1<<endl;
        for (int i=1; i<=n; i++)
            if (y[i]==1) cout<<a[i]<<" ";
    }
    else cout<<-1;
    return 0;
}

