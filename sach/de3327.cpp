//DE3327.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int n, A[1000001];
vector <int> P[256]; string s;
int tim(char x) {
    A[0]=0; A[n+1]=0;
    for (int i=1; i<=n; i++) {
        A[i]=A[i-1];
        if (s[i-1]==x) A[i]++;
    }
    int H=-n-1, cmin, Ci, j, t;
    for (char y='a'; y<='z'; y++) {
        if (y==x || P[y].size()==1) continue;
        cmin=n+1;
        for (int i=0; i<P[y].size(); i++) {
            j=P[y][i]; Ci = A[j-1] - i;
            if (cmin<=n) H=max(H, Ci - cmin);
            t=P[y][i-1];
            cmin=min(cmin, A[t]-i);
        }
    }
    return H;
}
int main() {
    cin>>n>>s;
    for (int i=0; i<n; i++)
        P[s[i]].push_back(i+1);
    for (char x='a'; x<='z'; x++)
      P[x].push_back(n+1);
    int dmax=0;
    for (char x='a'; x<='z'; x++)
        dmax=max(dmax, tim(x));
    cout<<dmax;
    return 0;
}

