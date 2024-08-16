//DE3389.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int kq = 0,nho = 0;
    for(int i = 0; i < s.size(); i++)
        if(s[i] != '?') {
            int k = s[i] - 48;
            kq = (kq + k * (i + 1)) % 7 ;
        }
        else nho = i;
    if(nho == 0 && kq == 0) {
        cout << 7;
        return 0;
    }
    for(int i = 0; i <= 9; i++)
        if(i * (nho + 1) % 7 == (7 - kq) % 7 ){
            cout << i;
            return 0;
        }
    cout << -1;
}

