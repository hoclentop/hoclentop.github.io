//DE3386.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
long long f[81], s[81];
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int m,n;
    cin>>m;
    f[0]=0; f[1] = 1;
    s[0]=0;  s[1]=1;
    for(int i=2;i<=80;i++) {
        f[i] = f[i-1] + f[i-2];
        s[i] = s[i-1] + f[i];
    }
    for(int i=1;i<=m;i++){
      cin>>n;
      cout<<s[n]<<" ";
    }
}

