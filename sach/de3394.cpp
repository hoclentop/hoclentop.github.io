//DE3394.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int n,a,T=0;
bool SNT(int x) {
    if (x<2) return false;
    for (int i=2;i<=sqrt(x);i++)
        if (x%i==0) return false;
    return true;
}
int main () {
  cin>>n;
  for (int i=1;i<=n;i++) {
    cin>>a;     if (SNT(a)) T+= a;
  }
  cout<<T;
}

