//DE3388.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll m,n,P,Q,res=1e18,xm,ym;
ll a[1001][1001],f[1001][1001];
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin>>m>>n>>P>>Q;
    for (ll i=1; i<=m; i++)
        for (ll j=1; j<=n; j++){
            cin>>a[i][j];
            f[i][j]=f[i-1][j]+f[i][j-1]+a[i][j]-f[i-1][j-1];
        }
    for (ll i=1; i+P-1<=m; i++)
        for (ll j=1; j+Q-1<=n; j++){
            ll x1=i,y1=j,x2=i+P-1,y2=j+Q-1;
            ll tam=f[x2][y2]-f[x1-1][y2]-f[x2][y1-1]
                        +f[x1-1][y1-1];
            if (tam<res){
                res=tam;
                xm=x1; ym=y1;
            }
        }
    cout<<res<<endl;
    cout<<xm<<" "<<ym;
}

