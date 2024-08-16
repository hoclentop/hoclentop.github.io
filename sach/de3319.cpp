//DE3319.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
set<int> C[1000001];
vector<int> B;
int a[401][401], m, n, D[401];
int main() {
    int x1, y1, x2, y2, i, j;
    set<int>::iterator si;
    int S, Smax=0, z, yc, yn;
    cin>>m>>n;
    for (i=1; i<=m; i++)
      for (j=1; j<=n; j++) cin>>a[i][j];
    for (x1=1; x1<=m; x1++) {
      B.clear();
      memset(D, 0, sizeof D);
      for (x2=x1; x2<=m; x2++) {
        for (y2=1; y2<=n; y2++) {
          z=a[x2][y2];
          yn=0;
          if (C[z].size()==0) yc=0;
          else {
            si = C[z].upper_bound(y2);
            if (si==C[z].begin()) yc=0;
            else {
              yc=*prev(si);
            }
            if (si != C[z].end()) yn=*si;
          }
          D[y2]=max({D[y2], yc+1, D[y2-1]});
          if (yn>0) D[yn]=max(D[yn], y2+1);
          C[z].insert(y2);
          S=(x2+1-x1)*(y2+1-D[y2]);
          if (S>Smax) Smax=S;
          if (C[z].size()==1) B.push_back(z);
        }
      }
      for (auto z : B) C[z].clear();
    }
    cout<<Smax;
    return 0;
}

