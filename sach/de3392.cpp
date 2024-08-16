//DE3392.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int m, n, s;   vector <vector <int>> a;
void sub1(vector <int> a, vector <int> b) {
    ll result = 0;
    sort(b.begin(),b.end());
    for(int x : a) {
        int u = lower_bound(b.begin(),b.end(),s-x)-b.begin();
        int v = upper_bound(b.begin(),b.end(),s-x)-b.begin();
        result += v - u;
    }cout << result;
}
void sub2() {
    vector<int> b,c;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            b.push_back(a[0][i] + a[1][j]);
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            c.push_back(a[2][i] + a[3][j]);
    sub1(b,c);
}
void sub3() {
    vector<int> b,c;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            for(int k = 0; k < n; k++)
                b.push_back(a[2][i] + a[3][j] + a[4][k]);
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            c.push_back(a[0][i] + a[1][j] );
    sub1(c,b);
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> m >> n >> s;
    a.assign(m, vector <int> (n, 0));
    for(int i = 0; i < m; i++)
        for(auto &x: a[i]) cin >> x;
    if (m == 2) sub1(a[0],a[1]);
    else if (m == 4) sub2();
    else sub3();
}

