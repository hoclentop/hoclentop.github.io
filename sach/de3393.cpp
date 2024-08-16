//DE3393.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
const ll M = 1e9 + 7;
int main() {
    ll k,res=0, ts = 1;
    cin>>k;
    if(k<=11) cout<<1;
    else
        while(ts != 0){
            ts = ts * 10 + 1;
            res = res * 10 + ts/k;
            res%=M;
            ts%=k;
        }
        cout<<res;
}

