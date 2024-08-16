//DE3385.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int m,n;
int y[20001], v[1001], x[1001], L[20001];
long long c[20001], F[1001][20001]={}, G[1001][20001]={};
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int i,j,k;
    cin>>n;
    for(i=1; i<=n; i++) cin>>y[i]>>c[i];
    cin>>m;
    for (i=1; i<=m; i++) cin>>x[i]>>v[i];
    y[0]=c[0]=0;
    for (i=1; i<=m; i++)
        for (j=0; j<=n; j++)
            if (x[i]>=y[j])
                G[i][j]=G[i-1][j] + (x[i]-y[j])*v[i];
    j=1;
    for (i=1; i<=m; i++)
        while (x[i]>=y[j] && j<=n) {
            L[j]=i-1;
            j++;
        }
    for (i=1; i<=m; i++) {
        F[i][0] = G[i][0];
        for (j=1; j<=n; j++) F[i][j]=1e12;
    }
    for (i=1; i<=m; i++) {
        for (j=1; j<=n; j++) {
            F[i][j]=F[i][j-1];
            if (x[i]>=y[j]) {
                k=L[j];
                F[i][j]=min(F[i][j],
                            F[k][j-1]+c[j]+G[i][j]-G[k][j]);
            }
        }
        cout<<F[i][n]<<" ";
    }
    return 0;
}

