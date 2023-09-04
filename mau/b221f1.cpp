#include <bits/stdc++.h>
using namespace std;
long long l, r;
int p[1000001];
int main() 
{
    freopen("cau1b.inp","r",stdin);
    freopen("cau1b.out","w",stdout);
    int x, y, a, b;
    cin>>l>>r;
    fill(p, p+1000001, 1);
    p[0]=p[1]=0;
    for (x=2; x < 1000001; x++) 
        if (p[x]==1) 
            for (y=x; y <= 1000000/x; y++)
                p[y*x]=0;
    for (x=1; x<1000001; x++) p[x]+=p[x-1];
    int c[] = {2, 4, 6, 10, 12, 16, 18, 22, 28, 30, 36};
    int dem=0;
    for (auto y:c) {
        b=pow(r,1.0/y);
        a=pow(l-1,1.0/y);
        dem+=p[b]-p[a];
    }
    cout<<dem;
    return 0;
}
