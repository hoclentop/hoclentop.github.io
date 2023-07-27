#include <iostream>
using namespace std;

int a[1000][1000];
int main() 
{
    int n;
    cin>>n;
    int i,j;
    for (i=1; i<=n; i++)
        for (j=1; j<=n; j++)
            a[i][j]=n*(j-1)+i;
            
    for (i=1; i<=n; i++){
        for (j=1; j<=n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}