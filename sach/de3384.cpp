//DE3384.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int n, a[1000001]; int b[1000001], m[1000001]={};
int main()  {
    cin>>n;
    int i,x,y,p,mx=0;
    for (i=1; i<=n; i++) {
        cin>>a[i];
        if (mx<a[i]) mx=a[i];
    }
    for (x=2; x<=mx; x++) b[x]=x;
    for (x=2; x*x<=mx; x++)
        for (y=x*x; y<=mx; y+=x)
            b[y]=min(b[y], x);
    for (i=1; i<=n; i++) {
        x=a[i];
        while (x>1) {
            p=b[x];
            m[p]++;
            x/=p;
        }
    }
    long long T=1;
    for (x=2; x<=mx; x++) T=T*(m[x]+1) % 1000000007;
    cout<<T;
}

