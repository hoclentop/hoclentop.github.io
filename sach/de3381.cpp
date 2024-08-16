//DE3381.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int x,y,n,a,r,m, h[100001];
int main()
{
    cin>>n>>a>>r>>m;
    if (m>a+r) m = a+r;
    for (int i=1; i<=n; i++) cin>>h[i];
    sort(h+1, h+n+1);
    x=1; y=n;
    while (x<y && h[x+1]==h[x]) x++;
    while (y>x && h[y-1]==h[y]) y--;
    long long c=0;
    while (h[y]-h[x]>=2) {
        c+=m;
        h[x]++;
        x--;
        while (x<y && h[x+1]==h[1]) x++;
        h[y]--;
        y++;
        while (y>x && h[y-1]==h[n]) y--;
    }
    if (x<y) c+=min(x*a, (n-x)*r);
    cout<<c;
    return 0;
}

