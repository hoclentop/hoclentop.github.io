//DE3359.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
long long N, x, y;
int main() {
    cin >> N >> x >> y;
    long long d = __gcd(x, y);
    x /= d;
    cout << N / x / y;
    return 0;
}

