//DE3343.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
pair<int, int> D[200001];  int n, a, b, h=0, hmax=0;
int main() {
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>a>>b;
        D[2*i]={a,0};
        D[2*i+1]={b,1};
    }
    sort(D, D+2*n);
    for (int i=0; i<=2*n; i++){
        if (D[i].second==0) {
            h++;
            hmax=max(hmax, h);
        }
        else h--;
    }
    cout<<hmax;
}

