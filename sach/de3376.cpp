//DE3376.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
long long F[5001][5001]; int x[5001], n, T[5001][5001];
signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);  cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> x[i], T[i][i] = T[i][i + 1] = i;
    for (int i = n - 2; i; --i) {
        for (int j = i + 2; j <= n; j++) {
            long long res = 1E18;
            long long cost = 1LL * (x[j]-x[i]) * (x[j]-x[i]);
            for (int k=T[i][j-1];k<=min(j-1,T[i+1][j]);k++){
                if (res >= F[i][k] + F[k][j] + cost) {
                    res = F[i][k] + F[k][j] + cost;
                    T[i][j] = k;
                }
            }
            F[i][j] = res;
        }
    }
    cout << F[1][n];
}

