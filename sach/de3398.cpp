//DE3398.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
typedef long long ll;
const int N = 2e5 + 1;
int n, q, id[N];
vector <int> save[N];
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> q;
    for(int x, i = 1; i <= n; i++) {
        cin >> x;
        id[x] = i;
    }
    for(int i = 1; i < N; i++) {
        for(int j = i; j < N; j += i) {
            if (id[j]) save[i].push_back(id[j]);
            if (id[i]) save[j].push_back(id[i]);
        }
    }
    for(int i = 1; i < N; i++) {
        sort(all(save[i]));
        save[i].erase(unique(all(save[i])), save[i].end());
    }
    for(int i = 1; i <= q; i++) {
        int l, r, d; cin >> l >> r >> d;
        int u = lower_bound(all(save[d]), l)-save[d].begin();
        int v = upper_bound(all(save[d]), r)-save[d].begin();
        cout << v - u << " ";
    }
    cout << "\n";
}

