//DE3323.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 2e3 + 1;
const ll M = 1e9 + 7;
ll m, n, d, k; ll a, b, c, e;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> m >> n >> d >> k;
    vector<string> x(m + 1);
    vector<vector<ll>> C(m + 1, vector<ll> (n + 1,0));
    for(int i = 1; i <= m; i++) {
        cin>>x[i];
        for(int j = 1; j <= n; j++)
            if(x[i][j-1] == 'M') C[i][j] = 1;
    }
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
            C[i][j] += C[i-1][j] + C[i][j-1] - C[i-1][j-1];
    ll dem = 0;
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
            if(x[i][j-1] == 'P') {
                a=max(i-d,1ll); b=max(j-d,1ll);
                c=min(i+d,m); e=min(j+d,n);
                ll S=C[c][e]-C[c][b-1]-C[a-1][e]+C[a-1][b-1];
                if( S >= k) dem++;
            }
    cout << dem;
    return 0;
}

