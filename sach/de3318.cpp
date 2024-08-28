#include <bits/stdc++.h>
using namespace std;
int C[1000001];
vector<int> B;
int a[401][401];
int m, n;
int D[401][401]={};
int main() 
{
    int x1, y1, x2, y2, i, j;
    int S, Smax=0, z, yc, yn;
    cin>>m>>n;
    for (i=1; i<=m; i++)
      for (j=1; j<=n; j++) cin>>a[i][j];
    for (x2=1; x2<=m; x2++) {
      memset(C, 0, sizeof C);
      for (y2=1; y2<=n; y2++) {
        z=a[x2][y2];
        D[x2][y2]=max({D[x2][y2], D[x2][y2-1], C[z]+1});
        C[z]=y2;
        S=(y2+1-D[x2][y2])*1;
        if (S>Smax) Smax=S;
      }
    }
    for (x1=m-1; x1>=1; x1--) {
      for (x2=x1+1; x2<=m; x2++) {
        memset(C, 0, sizeof C);
        for (y2=n; y2>=1; y2--) {
          z=a[x2][y2];
          if (C[z]>0) D[x2][C[z]] = max(D[x2][C[z]], y2+1);
          C[a[x1][y2]]=y2;
        }
        memset(C, 0, sizeof C);
        for (y2=1; y2<=n; y2++) {
          C[a[x1][y2]]=y2;
          z=a[x2][y2];
          D[x2][y2]=max({D[x2][y2], D[x2][y2-1], D[x2-1][y2], C[z]+1});
          S=(x2+1-x1)*(y2+1-D[x2][y2]);
          if (S>Smax) Smax=S;
        }
      }
    }
    cout<<Smax;
    return 0;
}
