//DE3368.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define all(x) x.begin(), x.end()
typedef long long ll;
typedef pair <int, int> ii;
const int N = 1e6 + 1;
int n, m, h, w;   vector <int> id;
vector <ii> event[N], save[N]; vector <vector <int>> a, B;
vector <vector <vector <int>>> b;
void up(int x, int y, int val) {
    for(; x <= n; x += (x & -x))
        for(int _y = y; _y <= m; _y += (_y & -_y))
            B[x][_y] += val;
}
int get(int x, int y) {
    int ans = 0;
    for(; x; x -= (x & -x))
        for(int _y = y; _y; _y -= (_y & -_y))
            ans += B[x][_y];
    return ans;
}
int sum(int x, int y, int _x, int _y) {
    return get(_x, _y)-get(_x,y-1)-get(x-1,_y)+get(x-1,y-1);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >> m >> h >> w;
    a.assign(n + 1, vector <int> (m + 1, 0));
    B.assign(n + 1, vector <int> (m + 1, 0));
    b.assign(n+1,vector<vector<int>>(m+1,vector<int>(20,0)));
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++) {
            cin >> a[i][j];
            id.push_back(a[i][j]);
        }
    sort(all(id));
    id.erase(unique(all(id)), id.end());
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            a[i][j]=lower_bound(all(id),a[i][j])-id.begin()+1;
    for(int k = 0; k < 20; k++)
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= m; j++)
                b[i][j][k] = b[i-1][j][k] + b[i][j-1][k] –
                          b[i-1][j-1][k] + (a[i][j] >> k & 1);
    int ans = 0, lim = h * w;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            event[a[i][j]].push_back({i, j});
            if (i < h || j < w) continue;
            int mask = 0;
            for(int k = 0; k < 20; k++) {
                int cnt = b[i][j][k]-b[i-h][j][k]-b[i][j-w][k]
                             +b[i-h][j-w][k];
                if (cnt * 2 > lim)
                    mask |= (1 << k);
            }
            save[mask].push_back({i, j});
        }
    }
    for(int i = 1; i < N; i++) {
        if (save[i].size()==0) continue;
        for(auto x: event[i])
            up(x.f, x.s, 1);
        for(auto v: save[i]) {
            int x = v.f-h+1, y=v.s-w+1, _x=v.f, _y=v.s;
            if (sum(x, y, _x, _y) * 2 > lim) ans++;
        }
        for(auto x: event[i])
            up(x.f, x.s, -1);
    }
    cout << (n - h + 1) * (m - w + 1) - ans << "\n";
}

