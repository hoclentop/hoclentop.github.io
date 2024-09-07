//DE3381.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int n, a, r, m;
int h[100001];
long long chiphi(int k) {
    long long sa=0, sr=0, sm;
    for (int i=1; i<=n; i++) {
        if (h[i]>=k) sr+=h[i]-k;
        else sa+= k-h[i];
    }
    sm=min(sa, sr);
    return sm*m+(sa-sm)*a+(sr-sm)*r;
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cin>>n>>a>>r>>m;
    if (a+r<m) m=a+r;
    int d=1e9, c=0, p, q, z;
    for (int i=1; i<=n; i++) {
        cin>>h[i];
        if (d>h[i]) d=h[i];
        if (c<h[i]) c=h[i];
    }
    while (d+3<=c) {
        z=(c-d)/3;
        p=d+z;
        q=c-z;
        if(chiphi(p)>=chiphi(q)) d=p;
        else c=q;
    }
    while (chiphi(d)>=chiphi(d+1)) d++;
    cout<<chiphi(d);
    return 0;
}
