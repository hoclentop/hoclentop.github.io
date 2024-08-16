//DE3353.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
struct CANH {
  int cuoi, len, cam;
};
int D[1001];
vector<CANH> K[1001];
int n,m,s,t,k,c, w[1001];
int main() {
    cin>>n>>m;
    cin>>s>>t>>k>>c;
    int i,j, u,v,l, du, dv;
    for (i=1; i<=c; i++) cin>>w[i];
    for (i=1; i<=m; i++) {
      cin>>u>>v>>l;
      K[u].push_back({v, l, 0});
      K[v].push_back({u, l, 0});
    }
    int z=0;
    for (i=1; i<c; i++) {
      u=w[i]; v=w[i+1];
      for (j=0; j<K[u].size(); j++) {
        if (K[u][j].cuoi==v) {
          K[u][j].cam=z;
          break;
        }
      }
      for (j=0; j<K[v].size(); j++) {
        if (K[v][j].cuoi==u) {
          K[v][j].cam=z;
          break;
        }
      }
      z+=K[v][j].len;
    }
    for (int i=1; i<=n; i++) D[i]=100000000;
    D[s]=k;
    priority_queue < pii, vector<pii>, greater <pii> > Q;
    Q.push({k,s});
    pii p; CANH h;
    while (!Q.empty()) {
      p=Q.top();
      Q.pop();
      du=p.first; u = p.second;
      if (du != D[u]) continue;
      for (i=0; i<K[u].size(); i++) {
        h=K[u][i];
        v=h.cuoi;
        if (h.cam>0 && h.cam <= du && du <= h.cam+h.len)
            dv=h.cam+2*h.len;
        else dv=du+h.len;
        if (D[v] > dv) {
          D[v]=dv;
          Q.push({dv, v});
        }
      }
    }
    cout<<D[t]-k;
    return 0;
}

