//DE3340.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
#define N 300000
#define ll long long
using namespace std;
int n,kq;
int lw[N+1], up[N+1], nu[N+1];
bool check(int t,int k){
    return up[k]-up[t]>0 && lw[k]-lw[t]>0 && nu[k]-nu[t]>0;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (int i=1;i<=n;i++){
        char x; cin >> x;
        up[i] = up[i-1];
        nu[i] = nu[i-1];
        lw[i] = lw[i-1];
        if (islower(x)) lw[i]++;
        else if (isupper(x)) up[i]++;
        else nu[i]++;
    }
    int i=0;
    for (int j=1;j<=n;j++){
        while (i+6<=j && check(i,j)) i++;
        kq+=i;
    }
    cout << kq;
    return 0;
}

