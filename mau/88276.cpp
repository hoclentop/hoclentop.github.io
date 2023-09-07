#include <iostream>
using namespace std;
int n, a[1000];
int main()
{
    int i, j, dem;
    cin>>n;
    for (i=1; i<= n; i++) cin>>a[i];
    for (i=1; i<=n; i++) {
        dem = 0;
        for (j=1; j<=i; j++)
            if (a[i]==a[j]) dem++;
        if (dem==1) cout<<a[i]<<" ";
    }
    return 0;
}
