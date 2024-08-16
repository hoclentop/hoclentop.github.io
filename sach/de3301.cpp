//DE3301.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int n,a[10001];
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++)
      cin>>a[i];
  sort(a+1,a+n+1);
  int i=1, T=0;
  while(i<n)
  {
      T++;
      a[i]--;
      if(a[i]==0) i++;
      n--;
  }
  cout<<T;
  return 0;
}

