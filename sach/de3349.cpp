//DE3349.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
long long luythua(int a, int b) {
    if (b==0) return 1;
    long long p=luythua(a, b/2);
    if (b%2==0) return p*p;  else return p*p*a;
}
int main() {
    string p;
    cin >> p;
    int n = p.length();
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        a[i] = p[n-1-i] - 48;
    vector<vector<int>> C(n + 1, vector<int>(n + 1, 0));
    long long s = 0, t;
    for (int i = 0; i < n; ++i) {
        C[i][0] = 1;
        for (int j = 1; j <= i; ++j)
            C[i][j] = C[i - 1][j] + C[i - 1][j - 1];
        t = 0;
        for (int x = 0; x <= i; ++x)
            t += C[i][x] * luythua(10, x);
        s += t * a[i] * (1 << (n - i - 1));
    }
    cout << s << endl;
    return 0;
}

