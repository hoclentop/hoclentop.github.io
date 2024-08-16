//DE3302.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
struct CANH { int k, d, u, v;} c[10001];
int P[201];
int n,m,D,R,T=0;
int findroot(int u) {
    if (P[u]!=u) P[u]=findroot(P[u]);
    return P[u];
}
bool xeptruoc(CANH x, CANH y) {
    if (x.k==y.k) return x.d<y.d;
    return x.k<y.k;
}
int main() {
    cin>>n>>m>>D>>R;
    int i,x,y;
    for (i=1; i<=m; i++) {
        cin>>c[i].u>>c[i].v>>c[i].d;
        c[i].k=0;
    }
    for (i=1; i<=D; i++) {
        cin>>x;
        c[x].k=1;
    }
    if (D==0) cin>>x;
    for (i=1; i<=R; i++) {
        cin>>x;
        c[x].k=2;
    }
    sort(c+1, c+m+1, xeptruoc);
    for (i=1; i<=n; i++) P[i]=i;
    for (i=1; i<=m; i++) {
        x=findroot(c[i].u);
        y=findroot(c[i].v);
        if (x!=y) {
            P[x]=y;
            if (c[i].k>0) T+=c[i].d;
        }
    }
    cout<<T;
    return 0;
}

