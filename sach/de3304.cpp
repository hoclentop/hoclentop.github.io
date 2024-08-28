#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;
ll a,b;
ll nen(ll n){
    for(ll i=2;i<=60;i++){
        if(n%i!=0) return i;
    }
}
ll donen(ll n){
    ll d=0;
    while (n>2) {
        n = nen(n);
        d++;
    }
    return d;
}

int main() 
{
    cin>>a>>b;
    ll s = 0;
    for (ll n=a; n<=b; n++)
        s+= donen(n);
    cout<<s;
    return 0;
}
