#include <iostream>
using namespace std;
int main()
{
    int i,n, a[1000],dmin;
    cin>>n;
    for (i=1; i<=n; i++) cin>>a[i];
    dmin=-1;
    for (i=1; i<=n; i++) 
        if (a[i]>0) {
            dmin=a[i];
            break;
        }
    if (dmin>0) {
        for (i=1; i<=n; i++)
            if (a[i]>0 && a[i]<dmin)
                dmin=a[i];
    }
    if (dmin>0) cout<<dmin;
    else cout<<"KHONG CO";
    return 0;
}