//DE3300.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 2e18;
struct DIEM {
    int a, b;
    bool operator < (DIEM &other) {
        return a < other.a;
    }
};
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, m, c;
    cin >> n >> m >> c;
    vector<DIEM> p(n + 1);
    vector<int> a;
    for(int i = 1; i <= n; i ++) {
        cin >> p[i].a >> p[i].b;
        a.push_back(p[i].a);
    }
    sort(p.begin() + 1, p.begin() + n + 1);
    sort(a.begin(), a.end());
    vector<int> L(n + 1);
    L[0] = INF;
    for(int i = 1; i <= n; i ++)
        L[i] = min(L[i - 1], p[i].b - p[i].a * c);
    vector<int> R(n + 2);
    R[n + 1] = INF;
    for(int i = n; i >= 1; i --)
        R[i] = min(R[i + 1], p[i].b + p[i].a * c);
    for(int i = 1; i <= m; i ++) {
        int d;
        cin >> d;
        int k = upper_bound(a.begin(), a.end(), d)-a.begin();
        int answer = INF;
        if(k > 0) answer = min(answer, d * c + L[k]);
        if(k + 1 <= n) answer = min(answer, - d*c + R[k+1]);
        cout << answer << "\n";
    }
    return 0;
}

