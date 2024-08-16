//DE3331.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int n;
long long s, a[201];
bool d[500001]={};
vector<int> c;
int main() {
    cin>>n>>s;
    for (int i=1; i<=n; i++) cin>>a[i];
    d[0]=true;
    int t=0;
    for (int i=1; i<=n; i++) {
        for (int x=t; x>=0; x--)
            if (d[x] && x+a[i]<=s) d[x+a[i]]=true;
        t+=a[i];
    }
    if (!d[s]) {
        cout<<-1;
        return 0;
    }
    for (int i=n; i>=1; i--)
        if (s>=a[i] && d[s-a[i]]) {
            c.push_back(a[i]);
            s-=a[i];
        }
    cout<<1<<endl;
    for (int i=c.size()-1; i>=0; i--)
        cout<<c[i]<<" ";
    return 0;
}

