#include <iostream>
using namespace std;
int a[100][100],m,n;
int main()
{
    int i,j,dem,x;
    bool ok;
    cin>>m>>n;
    for (i=1; i<=m; i++)
        for (j=1; j<=n; j++) cin>>a[i][j];
    dem=0;
    for (i=1; i<=m; i++) 
        for (j=1; j<=n;j++) {
            ok=true;
            for (x=1; x<=n; x++) 
                if (a[i][j]>a[i][x]) {
                    ok=false;
                    break;
                }
            for (x=1; x<=m; x++)
                if (a[i][j]<a[x][j]) {
                    ok=false;
                    break;
                }
            if (ok) {
                cout<<i<<" "<<j<<endl;
                dem++;
            }
        }
    if (dem==0) cout<<"KHONG CO";
    return 0;
}