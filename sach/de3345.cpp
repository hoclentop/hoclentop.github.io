//DE3345.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int n, F[100001];
int main() {
    cin>>n;
    F[0]=1; F[1]=3;
    for (int i=2; i<=n; i++)
        F[i]=(F[i-1]+F[i-2])*2 % 1000000007;
    cout<<F[n];
}

