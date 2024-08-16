//DE3341.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5 + 1;
int n, h[N], f[N][21];
ll c[N];
vector <int> edge[N], v;
bool cmp(int a, int b) {
    return c[a] > c[b];
}
void dfs(int u, int par) {
    h[u] = h[par] + 1;
    for(auto v: edge[u])
        if (v != par) {
            f[v][0] = u;
            for(int i = 1; i <= 20; i++)
                f[v][i] = f[f[v][i - 1]][i - 1];
            dfs(v, u);
        }
}
int lca(int a, int b) {
    if (h[a] < h[b]) swap(a, b);
    int k = h[a] - h[b];
    for(int i = 0; (1 << i) <= k; i++)
        if (k >> i & 1) a = f[a][i];
    if (a == b) return a;
    k = log2(h[a]);
    for(int i = k; i >= 0; i--)
        if (f[a][i] != f[b][i])
            a = f[a][i], b = f[b][i];
    return f[a][0];
}
int dis(int a, int b) {
    return h[a] + h[b] - 2 * h[lca(a, b)];
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> c[i];
        v.push_back(i);
    }
    for(int u, v, i = 1; i < n; i++) {
        cin >> u >> v;
        edge[u].push_back(v);
        edge[v].push_back(u);
    }
    sort(v.begin(),v.end(), cmp);
    dfs(1, 1);
    int a = v[0], b = v[0]; ll ans = 0;
    for(int i = 1; i < v.size(); i++) {
        ans = max(ans,c[v[i]]*max(dis(a, v[i]),dis(b,v[i])));
        if (dis(a, v[i]) > dis(b, v[i])) {
            if (dis(a, v[i]) > dis(a, b))
                b = v[i];
        } else
            if (dis(b, v[i]) > dis(a, b))
                a = v[i];
    }
    cout << ans << "\n";
}

