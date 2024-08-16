//DE3357.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int n,m,smau,dmin;
int c[1000005];
int a[10000005];
string s;
int main(){
    cin>>n>>m;
    if (n>1e6)
    {
        cout<<0;
        return 0;
    }
    for (int i=1; i<=n; i++)
        cin>>a[i];
    memset(c,0,sizeof c);
    int i=1;smau=0;dmin=1e8;
    for (int j=1; j<=n; j++) {
        c[a[j]]++;
        if (c[a[j]]==1)
            smau++;
        while (c[a[i]]>1 && i<=n){
            c[a[i]]--;
            i++;
        }
        if (smau==m)
            dmin=min(dmin,j-i+1);
    }
    if (dmin==1e8)
        dmin=0;
    cout<<dmin;
}

