//DE3380.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int m,n,q;
int R[100001], C[100001];
bool phuhop(int x, int y) {
  return R[x]==y && C[y]==x;
}
int main() {
    int dem=0, x, y, i, j, q, v,x2,y2;
    cin>>m>>n>>q;
    vector<vector<int>> A(m+1, vector<int>(n+1,0));
    for (i=1; i<=m; i++) R[i]=1;
    for (j=1; j<=n; j++) C[j]=1;
    for(i=1; i<=m; i++) {
      for (j=1;j <= n; j++) {
        cin>>A[i][j];
        if (A[i][j] > A[i][R[i]]) R[i]=j;
        if (A[i][j] > A[C[j]][j]) C[j]=i;
      }
    }
    for (i=1; i<=m; i++)
      if (C[R[i]]==i) dem++;
    bool ok;
    for (i=1; i<=q; i++) {
      cin>>x>>y>>v;
      ok=phuhop(x,y);
      y2=R[x];
      x2=C[y];
      if (A[x2][y]<v) {
        if (x2!=x && phuhop(x2,y)) dem--;
        C[y]=x;
      }
      if (A[x][y2]<v) {
        if (y2!=y && phuhop(x,y2)) dem--;
        R[x]=y;
      }
      A[x][y]=v;
      if (ok==false && phuhop(x,y)) dem++;
      cout<<dem<<endl;
    }
    return 0;
}

