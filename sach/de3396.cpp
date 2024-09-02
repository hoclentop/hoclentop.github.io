//DE3396.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <iostream>
using namespace std;
int n,m; int c[10001], p[10001], F[51][10001]={};
int main() {
    cin>>n>>m;
    int i,x,y,j,fmax=0;
    for (i=1; i<=n; i++) cin>>c[i]>>p[i];
    for(i=1; i<=n; i++) {
        for (j=1; j<=m; j++) {
            F[i][j]=F[i-1][j];
            if (j>=c[i])
                F[i][j]=max(F[i][j], F[i-1][j-c[i]]+p[i]);
            if (fmax < F[i][j]) {
                fmax = F[i][j];
                y=j;
            }
        }
    }
    int cmax=y;
    cout<<fmax<<endl;
    for (x=n; x>=1; x--)
        if (y>=c[x] && F[x][y] == F[x-1][y-c[x]]+p[x]){
            cout<<x<<" ";
            y-=c[x];
        }
    cout<<endl<<cmax;
}

