//DE3336.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int n, k, a[100001], b[100001], F[100001];
int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  cin>>n>>k;
  int i,j;
  for (i=1; i<=n; i++) cin>>a[i];
  for (i=1; i<=n; i++) cin>>b[i];
  F[0]=0; j=0;
  for (i=1; i<=n; i++) {
      F[i]=F[i-1];
      while (a[j+1]+k<=a[i]) j++;
      F[i]=max(F[i], F[j]+b[i]);
  }
  cout<<F[n];
}

