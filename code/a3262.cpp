#include <iostream>
using namespace std;
int n, a[10000];
int main()
{
    cin>>n;
    int i, v, d=0, dmax=0;
    for (i=1; i<=n; i++) cin>>a[i];
    for (i=1; i<=n; i++) {
        if (a[i]%2==0) {
            d++;
            if (d>dmax) {
                dmax=d;
                v=i-d+1;
            }
        }
        else {
            d=0;
        }
    }
    for (i=0; i<dmax; i++)
        cout<<a[v+i]<<" ";
    return 0;
}