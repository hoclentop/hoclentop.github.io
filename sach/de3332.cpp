//DE3332.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
const int N=1e5+1;
int n,m,p=0;  int P[N]={}, C[N]={};
vector<int> ke[N];
void dfs(int u, int y){
  P[u]=y; C[y]++;
  for (auto v:ke[u])
    if (P[v]==0)   dfs(v, y);
}
int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  cin>>n>>m;
  for (int i=1; i<=m; i++){
    int x,y; cin>>x>>y;
    ke[x].push_back(y);
    ke[y].push_back(x);
  }
  for (int i=1; i<=n; i++){
    if (P[i]==0){
      p++;
      dfs(i,p);
    }
  }
  int v=2;
  for (int i=3; i<=p; i++)
      if (C[i]>C[v]) v=i;
  cout<<C[1]+C[v];
  return 0;
}

