#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int  N = 1e6+7;
const int M = 1e9+7;
const ll oo = 1e18;
int n;
ll a[N];
ll dp[5005][5055];
int opt[5055][5055];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (int i=1; i<=n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            dp[i][j] = oo;
            if (i + 2 <= n) opt[i][i + 2] = i + 1;
            if (i + 1 <= n) opt[i][i + 1] = i + 1;
        }
    }

    for (int len = 1; len <= n; len++) {
        for (int i = n - len + 1; i >= 1; i--) {
            int j = i + len - 1;
            if (len == 1) dp[i][j] = 0;
            if (len == 2) dp[i][j] = 0;
            if (len >= 3) {
                for (int k = opt[i][j - 1]; k <= opt[i + 1][j]; k++) {
                    if (dp[i][j] > dp[i][k] + dp[k][j] + (a[i] - a[j]) * (a[i] - a[j])) {
                        dp[i][j] = dp[i][k] + dp[k][j] + (a[i] - a[j]) * (a[i] - a[j]);
                        opt[i][j] = k;
                    }
                }
            }
        }
    }
    cout << dp[1][n];
    return 0;
}
