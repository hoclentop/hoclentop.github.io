//DE3370.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
#define ll long long
using namespace std;
string int2str(ll n) {
    string p;
    while (n>0) {
      p=char(n%10+48)+p;
      n/=10;
    }
    if (p.length()==0) p="0";
    return p;
}
ll str2int(string s) {
    ll n=0;
    for (char c : s) n=n*10 + c-48;
    return n;
}
ll nummin(int scs) {
    if (scs==1) return 0;
    string p(scs,'0');
    p[0]='1';
    return str2int(p);
}
ll nummax(int scs) {
    return nummin(scs+1)-1;
}
ll findmin(ll a, ll b) {
    string xa = int2str(a);
    string xb = int2str(b);
    int na=xa.length(), nb = xb.length();
    if (na>=nb) return 0;
    ll c=str2int(xb.substr(0,na));
    ll d=str2int(xb.substr(na));
    if (a==c) return max(d, nummin(nb-na));
    if (a>c) return nummin(nb-na);
    return nummin(nb-na+1);
}
ll findmax(ll a, ll b) {
    return findmin(a,b+1)-1;
}
ll n, t, a[100001], L, R, dem, x, y;
int main() {
    int i,u,v;
    cin>>t;
    while (t--) {
        cin>>n>>L>>R;
        for (i=0; i<n; i++) cin>>a[i];
        sort(a, a+n);
        dem=0;
        for (i=0; i<n; i++) {
            x=findmin(a[i], L);
            y=findmax(a[i], R);
            u = lower_bound(a, a+n, x)-a;
            if (u<n) {
                v = upper_bound(a, a+n, y)-a;
                dem+=v-u;
            }
        }
        cout<<dem<<endl;
    }
}

