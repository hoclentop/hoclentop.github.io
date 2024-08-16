//DE3307.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
#define ll long long
#define int ll
using namespace std;
const int MAX = 2e5 + 1;
int n, m, k;  int T[MAX]={}, c[MAX], p[MAX], msk[MAX];
vector<int> Ke[MAX];
bool D[MAX];
void input(){
    cin >> n >> k >> m;
    for(int i=1; i<=k; i++){
        int u;
        cin >> u;
        T[u] = i;
        p[i] = u;
    }
    for(int i=1; i<=n; i++)
        cin >> c[i];
    for(int i=1; i<=m; i++){
        int u, v;
        cin >> u >> v;
        Ke[v].push_back(u);
    }
}
void DFS(int u, int t){
    msk[u] |= (1 << (t - 1));
    D[u] = true;
    for(int v: Ke[u]) if(!D[v])
        DFS(v, t);
}
ll f[10000];
signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    input();
    fill(f, f+10000, 1000000000000);
    for(int i=1; i<=k; i++){
        memset(D, false, sizeof D);
        DFS(p[i], i);
    }
    for (int i = 1; i <= n; i++) {
        f[msk[i]]=min(f[msk[i]], c[i]);
    }
    int H = 1ll << k;
    for(int i=1; i<H; i++) {
        for(int j=1; j<H; j++) {
            f[i | j]=min(f[i | j], f[i] + f[j]);
        }
    }
    cout << f[H - 1];
    return 0;
}

