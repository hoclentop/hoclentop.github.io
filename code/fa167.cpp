#include <iostream>
using namespace std;

int a[1000][1000];
int main() 
{
    int n;
    cin>>n;
    int i,j;
    for (i=1; i<=n; i++)
        for (j=1; j<=n; j++){
            if (i%2==1)
              a[i][j]=n*(i-1)+j;
            else
                a[i][j]=n*(i-1)+n+1-j;
        }
            
    for (i=1; i<=n; i++){
        for (j=1; j<=n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}