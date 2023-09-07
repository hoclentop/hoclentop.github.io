#include <iostream>
using namespace std;
int n, a[1000];
int main()
{
    int i, j, dem, k;
    cin>>n;
    for (i=1; i<= n; i++) cin>>a[i];
    for (i=1; i<=n; i++) {
        if (a[i]==0) continue;
        k = a[i];
        dem = 0;
        for (j=1; j<=n; j++)
            if (k==a[j]) {
                dem++;
                a[j] = 0;
            }
        cout<<k<<" "<<dem<<endl;
    }
    return 0;
}
