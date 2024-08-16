//DE3314.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007;
const int MAX_N = 1000;
long long C[MAX_N + 1][MAX_N + 1]={}, F[MAX_N + 1][MAX_N + 1];
void tg_pascal(int n) {
    for (int i = 0; i <= n; ++i) {
        C[i][0] = 1;
        for (int j = 1; j <= i; ++j)
            C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % MOD;
    }
}
int main() {
    int n, k;
    cin >> n >> k;
    unordered_map<string, int> kq;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        kq[s] = 1 + kq[s];
    }
    vector<int> a;
    for (auto& kv : kq)
        a.push_back(kv.second);
    int l = *max_element(a.begin(), a.end());
    tg_pascal(l);
    F[0][0] = 1;
    n = a.size();
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= k; ++j) {
            for (int m = 0; m <= a[i - 1]; ++m) {
                int x = m * (m - 1) / 2;
                if (j < x) break;
                F[i][j] += (F[i-1][j-x] * C[a[i-1]][m]) % MOD;
                F[i][j] %= MOD;
            }
        }
    }
    cout << F[n][k] << endl;
    return 0;
}

