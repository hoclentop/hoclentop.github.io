//DE3358.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
vector<int> P[1001];
int a[100], n,s;  int D[100001];
int main() {
    int x,y,p,t,i,j;
    for (x=2; x<=1000; x++) {
      P[x].push_back(x);
      y=x;
      p=2;
      while (y>=p*p) {
        if (y % p == 0) {
          P[x].push_back(x/p);
          while (y%p==0) y/=p;
        }
        p++;
      }
      if (y>1) P[x].push_back(x/y);
    }
    while (cin>>n) {
      t=0;
      for (i=1; i<=n; i++) {
        cin>>a[i];
        t+=a[i];
      }
      cin>>s;
      if (t<=s) {
        cout<<t<<" "<<0<<endl;
        continue;
      }
      fill(D, D+s+1, 1000);
      D[0]=0;
      t=0;
      for (i=1; i<=n; i++) {
        y=a[i];
        for (x=t; x>=0; x--) {
          for (j=0; j<P[y].size(); j++){
            p=P[y][j];
            if (x+p<=s) D[x+p]=min(D[x+p], D[x]+(j>0));
          }
          t=min(t+y, s);
        }
      }
      while (D[s]==1000) s--;
      cout<<s<<" "<<D[s]<<endl;
    }
    return 0;
}

