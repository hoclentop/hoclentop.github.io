#include <iostream>
using namespace std;
int n, a[1000];
int main()
{
    int i,k;
    bool ok;
    cin>>n;
    for (i=1; i<=n; i++) cin>>a[i];
    for (k=1; k<=n; k++) {
        ok = true;
        for (i=1; i<=n-k; i++)
            if (a[i]!=a[i+k]) ok = false;
        if (ok) {
            cout<<k;
            break;
        }
    }
    return 0;
}
