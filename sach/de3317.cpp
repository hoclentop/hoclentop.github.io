//DE3317.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll inf=1e18;
const ll N=2e6+1;
ll n,m=-inf, a[N],D[N]={}, B[N]={};
int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);
    cin>>n;
    for (int i=1; i<=n; i++){
        cin>>a[i]; m=max(m,a[i]);
        D[a[i]]++;
    }
    for (int x=1; x<=m; x++){
        for (int y=x; y<=m; y+=x){
            B[x]+=D[y];
        }
    }
    ll T=0;
    for (int x = 2; x <= m; x++)
        T=max(T, x*B[x]);
    cout<<T;
    return 0;
}

