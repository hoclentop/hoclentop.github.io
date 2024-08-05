#include <bits/stdc++.h>
using namespace std;
const int maxn = 1 + 2e5;
int n, Q, a[maxn];
vector<int > g[maxn], query;
vector<int > res;
vector<multiset<int > > s;
void dfs(int u, int p) {
    for (int v: g[u]) 
      if (v != p) {
        dfs(v,u);
        //if (s[u].size() < s[v].size()) swap(s[u],s[v]);
        for (int x: s[v]) s[u].insert(x);
    }
    multiset<int >::iterator L = s[u].lower_bound(a[u]);
    if (L != s[u].end())
        s[u].erase(L);
    s[u].insert(a[u]);
    res[u] = s[u].size();
}
int main() {
    cin >> n >> Q;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    for (int i = 1; i < n; ++i) {
        int u; cin >> u;
        g[u].push_back(i+1);
    }
    for (int q = Q; q--;) {
        int u; cin >> u;
        query.push_back(u);
    }
    s.resize(n+1);
    res.resize(n+1,0);
    dfs(1,-1);
    for (int u: query) cout << res[u] << '\n';
    return 0;
}
