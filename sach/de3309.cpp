//DE3309.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int n, a[1000005],c[1000005]={};
int main() {
    int i,j,dmin,m,k,x,y;
    cin>>n>>m;
    for (i=1; i<=n; i++) cin>>a[i];
    dmin=n+1; k=0; i=1;
    for (j=i; j<=n; j++) {
        x=a[j];
        c[x]++;
        if (c[x]==1) k++;
        while (k==m) {
            dmin=min(dmin,j-i+1);
            y=a[i];
            c[y]--;
            if (c[y]==0) k--;
            i++;
        }
    }
    cout<<dmin;
}

