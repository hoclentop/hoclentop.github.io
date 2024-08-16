//DE3377.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 1;
struct canh {
    int u, v, w, id;
} Q[N], edge[N];
int par[N], sz[N], ans[N], q, n, m;
int findroot(int u) {
    return par[u] == u ? u : par[u] = findroot(par[u]);
}
bool join(int u, int v) {
    u = findroot(u);
    v = findroot(v);
    if (u == v) return 0;
    if (sz[u] < sz[v]) swap(u, v);
    par[v] = u;
    sz[u] += sz[v];
    return 1;
}
void solve() {
    cin >> n >> m >> q;
    for (int i = 1; i <= n; i++) {
        par[i] = i;
        sz[i] = 1;
    }
    for (int i = 1; i <= m; i++)
        cin >> edge[i].u >> edge[i].v >> edge[i].w;
    sort(edge + 1, edge + m + 1, [&] (canh &a, canh &b) {
        return a.w < b.w;
    });
    for (int i = 1; i <= q; i++) {
        cin >> Q[i].u >> Q[i].w;
        Q[i].id = i;
    }
    sort(Q + 1, Q + q + 1, [&] (canh &a, canh &b) {
        return a.w < b.w;
    });
    for (int i = 1, j = 1; i <= q; i++) {
        while (j <= m && edge[j].w <= Q[i].w)
            join(edge[j].u, edge[j].v), j++;
        ans[Q[i].id] = sz[findroot(Q[i].u)];
    }
    for (int i = 1; i <= q; i++)
        cout << ans[i] << '\n';
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}

