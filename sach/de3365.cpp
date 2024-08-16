//DE3365.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
struct CANH {
  int c, u, v;
} D[100000];
pair<int,int> C[100001];
int n, q, a[100001], P[100001], H[100001], B[100001];
int findroot(int u) {
  if (P[u] != u) P[u]=findroot(P[u]);
  return P[u];
}
bool xeptruoc(CANH x, CANH y) {
  return x.c < y.c;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int d, dmax, i, j, k;
    cin>>n>>q;
    for (i=1; i<=n; i++) {cin>>a[i];}
    for (i=1; i<=n; i++) D[i]={a[i],i,i+1};
    for (i=1; i<=q; i++) {
      cin>>C[i].first;
      C[i].second=i;
    }
    sort(D+1, D+n+1, xeptruoc);
    sort(C+1, C+q+1);
    for (i=1; i<=n+1; i++) {
      P[i]=i;
      H[i]=1;
    }
    j=1;
    int maxx=1,x,y;
    for (i=1; i<=n; i++) {
      while (D[i].c > C[j].first && j<=q) {
        B[C[j].second] = maxx-1;
        j++;
      }
      if (j>q) break;
      x=findroot(D[i].u);
      y=findroot(D[i].v);
      if (x!=y) {
        P[x]=y;
        H[y]+=H[x];
        maxx=max(maxx, H[y]);
      }
    }
    for (i=j; i<=q; i++) B[C[i].second]=maxx-1;
    for (i=1; i<=q; i++) cout<<B[i]<<endl;
    return 0;
}

