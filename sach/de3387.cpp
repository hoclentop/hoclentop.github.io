//DE3387.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int c[256]={};
int main() {
    string s,p;
    int n=0, i;
    getline(cin, p);
    p=p+'a';
    for (i=0; i<p.length(); i++)
        if (isdigit(p[i])) n=n*10+p[i]-48;
        else if (n>0) break;
    while (getline(cin,p)) s+=p;
    for (i=0; i<s.length(); i++)
        c[s[i]]++;
    for (i=0; i<s.length(); i++)
        if (c[s[i]]<=n) cout<<s[i];
    return 0;
}

