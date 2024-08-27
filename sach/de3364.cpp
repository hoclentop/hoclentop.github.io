#include <iostream>
using namespace std;
int n, q;
int a[100001];
int main() 
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n>>q;
    int i,j, k, d, dmax;
    for (i=1; i<=n; i++) cin>>a[i];
    for (j=1; j<=q; j++) {
        cin>>k;
        d=dmax=0;
        for (i=1; i<=n; i++) {
            if (a[i]<=k) {
                d++;
                if (d>dmax) dmax=d;
            }
            else d=0;
        }
        cout<<dmax<<endl;
    }
    return 0;
}
