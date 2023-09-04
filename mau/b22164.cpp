#include <bits/stdc++.h>
using namespace std;
pair<int,int> a[200001];
int n, k=0;
int f[200001], c[200001];
int main() 
{
    ios::sync_with_stdio(false); cin.tie(0);
    freopen("chonsach.inp","r",stdin);
    freopen("chonsach.out","w",stdout);
    cin>>n;
    int i,j,x,u;
    for (i=1; i<=n; i++) 
        cin >> a[i].first >> a[i].second;
    sort(a+1, a+n+1);
    fill(c, c+200001, 1e9);
    int fmax = 0; u=1;
    for (i=1; i<=n; i++) {
        while (u<i && a[u].first < a[i].first) {
            x = f[u];
            c[x] = min(c[x], a[u].second);
            u++;
        }
        x = k;
        while (c[x]>=a[i].second && x>0) x--;
        f[i]=x+1;
        k = max(k, x+1);
        fmax = max(fmax, f[i]);
    }
    cout<<fmax;
    return 0;
}
