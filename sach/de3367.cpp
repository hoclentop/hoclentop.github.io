#include <bits/stdc++.h>
typedef long long ll;
#define           f    first
#define           s    second
using namespace std;
const int N = 1e6 + 1e5;
vector <pair <int, int>> ask[N], pos[N];
vector < vector <int>> f;
int m, n;
void solve() {
    int h, w;
    cin >> m >> n >> h >> w;
    vector < vector < vector <int>>> P;
    for (int i = 0; i < 20; i++) {
        vector < vector <int>> v(m + 1, vector <int> (n + 1, 0));
        P.push_back(v);
    }
    map <int, int> mp;
    int timer = 0;
    vector < vector <int>> a(m + 1, vector <int> (n + 1, 0));
    f.assign(m + 1, vector <int> (n + 1, 0));
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
            mp[a[i][j]];
        }
    }
    for (auto &x : mp)
        x.s = timer++;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            a[i][j] = mp[a[i][j]];
            pos[a[i][j]].push_back({i, j});
        }
    }
    for (int k = 0; k < 20; k++) {
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                P[k][i][j] = P[k][i - 1][j] + P[k][i][j - 1] - P[k][i - 1][j - 1];
                if (a[i][j] & (1 << k)) {
                    P[k][i][j]++;
                }
            }
        }
    }
    int dem = 0, sz = h * w;
    for (int i = h; i <= m; i++) {
        for (int j = w; j <= n; j++) {
            int v = 0;
            for (int k = 0; k < 20; k++) {
                int dk = P[k][i][j] - P[k][i - h][j] - P[k][i][j - w] + P[k][i - h][j - w]; 
                if (dk*2 == sz) {
                    v=0;
                    break;
                }
                if (dk*2 > sz) {
                    v |= (1 << k);
                }
            }
            if (v>0) {
                int dv=0;
                for (int ii = i-h+1; ii<=i; ii++)
                    for (int jj = j-w+1; jj<=j; jj++)
                        if (a[ii][jj]==v) dv++;
                if (dv*2<=sz) dem++;
            }
            else dem++;
        }
    }
    cout<< dem;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
