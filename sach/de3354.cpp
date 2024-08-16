//DE3354.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int n,m,a,b,c,cd,md,v,g;
int main() {
    cin>>n>>m>>a>>b>>c;
    cd=0;  if (n>a) cd=n-a;
    md=0;  if (m>b) md=m-b;
    v=cd+md;
    g=0;   if (v>c) g=v-c;
    cout<<g;
}

