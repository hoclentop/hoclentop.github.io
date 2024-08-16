//DE3352.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
vector<int> K[100001];
map <int, int> H[100001];
long long M[100001];
int a[100001];
int n;
void DFS(int u) {
  H[u][a[u]]++;
  for (int v : K[u]) {
    DFS(v);
    for (auto x : H[v]) H[u][x.first]+=x.second;
    H[v].clear();
  }
  long long dem=0,tong=0;
  for (auto x : H[u]) {
    if (x.second>dem) {
      dem=x.second;
      tong=0;
    }
    if (x.second==dem) tong+=x.first;
  }
  M[u]=tong;
}
int main()
{
    int i, u, v;
    cin>>n;
    for (i=1; i<=n; i++) cin>>a[i];
    for (i=1; i<n; i++) {
      cin>>u>>v;
      K[u].push_back(v);
    }
    DFS(1);
    for (u=1; u<=n; u++) {
      cout<<M[u]<<" ";
    }
    return 0;
}

