//DE3330.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int n,m;  long long s, k, a[201], x[201], y[201];
vector<long long> b;  bool stop = false;
void thu(int i, long long t) {
    if (i>m) {
        b.push_back(t);
        return ;
    }
    for (int v=0; v<=1; v++) {
        x[i]=v;
        thu(i+1, t+v*a[i]);
    }
}
void thu2(int i, long long t) {
    if (i>m) {
        if (t==k){
            stop=true;
            copy(x, x+m+1, y);
        }
        return ;
    }
    if (stop) return;
    for (int v=0; v<=1; v++) {
        x[i]=v;
        thu2(i+1, t+v*a[i]);
    }
}
void thu3(int i, long long t) {
    if (i>n) {
        long long d=s-t;
        if (binary_search(b.begin(), b.end(), d)) {
            stop=true; k=d;
            copy(x+m+1,x+n+1, y+m+1);
        }
        return;
    }if (stop) return;
    for (int v=0; v<=1; v++) {
        x[i]=v;
        thu3(i+1, t+v*a[i]);
    }
}
int main() {
    cin>>n>>s;
    for (int i=1; i<=n; i++) cin>>a[i];
    m=n/2;
    thu(1,0);
    sort(b.begin(), b.end());
    thu3(m+1,0);
    if (!stop) {
        cout<<-1;
        return 0;
    }
    stop=false;
    thu2(1,0);
    cout<<1<<endl;
    for (int i=1; i<=n; i++)
        if (y[i]==1) cout<<a[i]<<" ";
    return 0;
}

