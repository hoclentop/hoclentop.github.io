//DE3324.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int n, q, a[100001], f[100001][101]={};
vector<int> K[100001];
void DFS(int u, int ch) {
  int v;
  for (int i=0; i< K[u].size(); i++) {
    v=K[u][i];
    if (v==ch) continue;
    DFS(v, u);
    for (int j=0; j<=100; j++)
      f[u][j]+=f[v][j];
  }
  f[u][a[u]]=max(f[u][a[u]], f[u][a[u]-1]+1);
  for (int j=a[u]+1; j<=100; j++)
    f[u][j]=max(f[u][j], f[u][j-1]);
}
int main() {
    cin>>n>>q;
    int i,x;
    for (i=1; i<=n; i++) cin>>a[i];
    for (i=1; i<n; i++) {
      cin>>x;
      K[x].push_back(i+1);
    }
    DFS(1,1);
    for (i=1; i<=q; i++) {
      cin>>x;
      cout<<f[x][100]<<endl;
    }
    return 0;
}

