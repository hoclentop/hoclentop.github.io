//DE3326.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int n, C[1000001];
string s;
int dem(char x, char y) {
    int cmin=10000000, v=0, H=-10000000;
    C[0]=0;
    for (int i=1; i<=n; i++) {
        if (s[i-1]==x) C[i]=C[i-1]+1;
        else if (s[i-1]==y) C[i]=C[i-1]-1;
        else C[i]=C[i-1];
        if (s[i-1]==y) {
            while (v<i) {
                cmin=min(cmin, C[v]);
                v++;
            }
        }
        if (cmin < 10000000) H = max(H, C[i]-cmin);
    }
    return H;
}
int tim(char x) {
    int hmax=0;
    for (char y = 'a'; y <= 'z'; y++)
        if (x!=y) hmax=max(hmax, dem(x,y));
    return hmax;
}
int main() {
    cin>>n>>s;
    int dmax=0;
    for (char x='a'; x<='z'; x++)
        dmax=max(dmax, tim(x));
    cout<<dmax;
    return 0;
}

