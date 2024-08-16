//DE3395.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int n;
int x[100];
int p[]={2,3,5,7,11,13,17,19,23,29,31};
long long kq=1e18;
long long luythua(int a, int n) {
    long long t=1;
    for (int i=1; i<=n; i++) t*=a;
    return t;
}
void xuli(int k) {
    long long s=1;
    for (int i=1; i<k; i++) {
        s*=luythua(p[i-1], x[i]-1);
    }
    if (s<kq) kq=s;
}
void thu(int k, int n, int g) {
    if (n==1) {
        xuli(k);
        return ;
    }
    for (int v=2; v<=min(n,g); v++) {
        if (n % v==0) {
            x[k]=v;
            thu(k+1, n/v, v);
        }
    }
}
int main()
{
    cin>>n;
    thu(1, n, n);
    cout<<kq;
    return 0;
}

