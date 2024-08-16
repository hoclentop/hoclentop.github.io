//DE3305.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
ll BC[100];
ll a,b;
ll nen(ll n){
    for(ll i=2;i<=60;i++){
        if(n%i!=0) return i;
    }
}
ll donen(ll n){
    if(n==2) return 0;
    return donen(nen(n))+1;
}
ll bcnn(ll a, ll b) {
    return a / __gcd(a, b) * b;
}
ll C(ll k,ll n){
    return n/BC[k-1] - n/BC[k];
}
ll D(ll n){
    ll s = 0;
    for(ll k = 2; k <= 60; k++){
        s = s + (donen(k)+1)*C(k,n);
    }
    return s;
}
int main() {
    BC[1] = 1;
    for(ll i = 2 ;i <= 60;i++)
    {
        BC[i] = bcnn(BC[i-1],i);
    }
    cin>>a>>b;
    cout<<D(b)-D(a-1);
    return 0;
}

