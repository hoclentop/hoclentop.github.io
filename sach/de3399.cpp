//DE3399.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define all(x) x.begin(), x.end()
typedef long long ll;
typedef pair <int, int> ii;
const int N = 2e5 + 1;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, m; cin >> n >> m;
    vector <ii> a(n);      vector <int> c(m);
    for(auto &x: a) cin >> x.f >> x.s;
    for(auto &x: c) cin >> x;
    sort(all(c), greater <int> ());
    sort(all(a), [] (ii x, ii y) {
        if (x.s != y.s) return x.s > y.s;
        return x.f > y.f;
    });
    int j = 0;
    for(int i = 0; i < n && j < m; i++) {
        if (a[i].f <= c[j]) j++;
    }
    cout << j << "\n";
}

