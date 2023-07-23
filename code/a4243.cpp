#include <iostream>
using namespace std;
int n, m,  a[100][100];
int main()
{
    int i,j;
    cin>>m>>n;
    for (i=1; i<=m; i++) 
        for (j=1; j<=n; j++) cin>>a[i][j];
    for (j=1; j<=n; j++) {
        for (i=1; i<=m; i++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}