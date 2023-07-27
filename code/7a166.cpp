#include <iostream>
using namespace std;

int a[1000][1000];
int main() 
{
    int m,n;
    cin>>m>>n;
    int i,j;
    for (i=1; i<=m; i++)
        for (j=1; j<=n; j++)
            a[i][j]=n*(i-1)+j;
            
    for (i=1; i<=m; i++){
        for (j=1; j<=n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}