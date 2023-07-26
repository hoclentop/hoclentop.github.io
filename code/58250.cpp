#include <iostream>
using namespace std;
int a[100][100],m,n;
int main()
{
    int i,j,s,c,d,tmax,x,y,t;
    cin>>m>>n;
    for (i=1; i<=m; i++)
        for (j=1; j<=n; j++) cin>>a[i][j];
    tmax=0;
    for (i=1; i<=m; i++)
        for (j=1; j<=n; j++) {
            for (t=1; t<=min(m-i+1,n-j+1); t++) {
                s=0;
                for (c=1; c<=t; c++) 
                    for (d=1; d<=t; d++)
                        s+=a[i+c-1][j+d-1];
                if (s==0 && t>tmax) {
                    tmax=t;
                    x=i;
                    y=j;
                    
                }
            }
        }
    cout<<x<<" "<<y<<" "<<tmax;
    return 0;
}