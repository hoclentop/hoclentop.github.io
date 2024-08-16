//DE3351.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    string s;
    cin >> n >> s;
    vector<int> F(n + 1, 0);
    for (int i = 0; i < n; ++i)
        F[i + 1] = F[i] + (s[i] == 'a' ? 1 : -1);
    unordered_map<int, int> C;
    for (int i = 0; i <= n; ++i)
        C[F[i] + n]++;
    long long Dem = 0;
    for (auto x : C)
        Dem += 1LL * x.second * (x.second - 1) / 2;
    cout << Dem << endl;
}

