//DE3310.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair <int, int>
#define f first
#define s second
const ll N = 1e5 + 5;
const ll MOD = 1e9 + 7;
priority_queue <pii, vector <pii>, greater <pii>> q;
int n, m, s, t, x, y, c, D[N];
vector <pii> Ke[N];
void dijkstra(int s) {
    memset(D, 0x3f, sizeof(D));
    D[s] = 0;
    q.push({0, s});
    while (q.size()) {
        int u = q.top().s;
        int du = q.top().f;
        q.pop();
        if (du > D[u]) continue;
        if (u == t) return;
        for (auto x : Ke[u]) {
            int v = x.f;
            int c = x.s;
            if (D[v] > D[u] + c) {
                D[v] = D[u] + c;
                q.push({D[v], v});
            }
        }
    }
}
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> m >> s >> t;
    while (m--) {
        cin >> x >> y >> c;
        Ke[x].push_back({y, c});
        Ke[y].push_back({x, c});
    }
    dijkstra(s);
    cout << D[t] << '\n';
}

