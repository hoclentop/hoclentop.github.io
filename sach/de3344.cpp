//DE3344.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s,p;  int n,k,a,t=0,nho=0;
    cin>>n>>k>>s;
    p=s;
    while (k>1) {
        t++;
        k/=2;
    }
    string q(t,'0');
    p=p+q;  s=q+s;  q=p;
    for (int i=t+n-1; i>=0; i--) {
        a=s[i]+nho+p[i]-96;
        q[i]=a%2+48;
        nho=a/2;
    }
    if (nho>0) q='1'+q;
    cout<<q;
}

