//DE3306.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int F[100001];
const int MOD = 1e9 + 7;
int main(){
    int n;
    cin >> n;
    set<string> s;
    for (int i = 0; i < n; i++) {
        string p;
        cin >> p;
        s.insert(p);
    }
    string x;
    cin >> x;
    int m = x.length();
    F[0] = 1;
    for (int i = 1; i <= m; i++) {
        F[i] = 0;
        for (int l = 1; l <= 100 && i - l >= 0; l++){
            int j = i - l;
            if (s.find(x.substr(j, l)) != s.end())
                F[i] = (F[i] + F[j]) % MOD;
        }
    }
    cout << F[m];
    return 0;
}

