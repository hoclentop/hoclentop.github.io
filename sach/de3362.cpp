#include <iostream>
#include <cstring>
using namespace std;
int a[200001], c[200001], n;
int main() 
{
    int m, i,j;
    long long dem=0;
    cin>>n;
    for(i=1; i<=n; i++) cin>>a[i];
    for (i=1; i<n; i++) {
        m=0;
        memset(c, 0, sizeof c);
        for (j=i;j<=n;j++) {
            c[a[j]]++;
            if (c[a[j]]==1) m++;
            if (c[a[j]]==2) m--;
            if (c[a[i]]>1) break;
            if (c[a[j]]>1) continue;
            if (m>2) dem+=m-2;
        }
    }
    cout<<dem;
    return 0;
}
