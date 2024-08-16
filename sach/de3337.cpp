//DE3337.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair <int, int> ii;
typedef pair <ll, ll> pll;
const int N = 1e5 + 1;
void solve() {
    int n, L, D; cin >> n;
    vector <ii> a(n + 1);
    for(int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;
    a[n] = {0, 0};
    cin >> L >> D;
    int ans = 0;
    priority_queue <int> pq;
    for(int i = 0; i <= n; i++) {
        a[i].first = L - a[i].first;
        while (pq.size()>0 && D < a[i].first) {
            D += pq.top();
            pq.pop();
            ans++;
        }
        if (D >= a[i].first) {
            pq.push(a[i].second);
        } else {
            cout << "-1\n";
            return;
        }
    }
    cout << ans << "\n";
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}

