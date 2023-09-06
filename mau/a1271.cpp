#include <iostream>
using namespace std;
int a[1000], n;
int main()
{
    int i, dmax=0, d=1,v;
    cin>>n;
    for (i=1; i<=n; i++) cin>>a[i];
    for (i=2; i<=n; i++) {
        if (a[i] > a[i-1]) d++;
        else {
            if (d > dmax) {
                dmax = d;
                v = i - d;
            }
            d = 1;
        }
    }
    if (d > dmax) {
        dmax = d;
        v = n+1-d;
    }
    for (i=v; i<v+dmax; i++) cout<<a[i]<<" ";
    return 0;
}
