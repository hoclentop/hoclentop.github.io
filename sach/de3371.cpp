//DE3371.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
typedef long long ll;
const int N = 1e6 + 1;
int n;
vector <int> dijkstra(vector < vector <pii> > Ke, int s) {
    priority_queue <pii, vector <pii> , greater <pii> > pq;
    pq.push({0, s});
    vector <int> D(n + 1, 1e9);
    D[s] = 0;
    while (pq.size()>0) {
        auto t = pq.top();
        int u=t.second, du=t.first;
        pq.pop();
        if (D[u] < du) continue;
        for (auto x : Ke[u]) {
            int v=x.first, c = x.second;
            if (D[v] > D[u] + c) {
                D[v] = D[u] + c;
                pq.push({D[v], v});
            }
        }
    }
    return D;
}
int solve() {
    int m, k,  u, v, w1, w2;
    cin >> n >> m >> k;
    vector < vector <pii> > X(n + 1), Y(n + 1), Z(n + 1);
    for (int i = 0; i < m; i++) {
        cin >> u >> v >> w1 >> w2;
        Z[v].push_back({u, w1});
        Y[v].push_back({u, w2});
        X[u].push_back({v, w2});
    }
    vector <int> A = dijkstra(X, 1), B = dijkstra(Y, n),
                                     C = dijkstra(Z, k);
    int ans = 1e9;

for (int i = 1; i <= n; i++) {
        if (A[i] + C[i] <= 59) {
            ans = min(ans, A[i] + B[i]);
        }
    }
    return ans;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cout << solve();
}

