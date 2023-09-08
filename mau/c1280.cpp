#include <iostream>
using namespace std;
int n, a[1000];
int main()
{
    int i,j;
    bool ok;
    cin>>n;
    for (i=1; i<=n; i++) cin>>a[i];
    for (i=1; i<n; i++) 
        for (j=i+1; j<=n; j++)
            if (a[i]>a[j]) swap(a[i],a[j]);
    ok = true;
    for (i=1; i<n; i++) {
        if (a[i]+1 != a[i+1]) ok = false;
    }
    if (ok) cout<<"YES";
    else cout<<"NO";
    return 0;
}
