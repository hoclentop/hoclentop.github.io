//DE3338.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int main() {
    ll n;
    cin>>n;
    ll gt = 1, tong = 0;
    for(ll i=1;i<=n;i++){
        gt = gt * i % 20240131;
        tong = (tong + gt) % 20240131;
        if (gt==0) break;
    }
    cout<<tong;
    return 0;
}

