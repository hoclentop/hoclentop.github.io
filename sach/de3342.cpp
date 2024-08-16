//DE3342.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int U(int n){
    int dem=0, cn = sqrt(n);
    if (cn*cn==n) {
        dem+=1;
        cn--;
    }
    for(int i=1; i<=cn; i++)
        if(n%i==0) dem+=2;
    return dem;
}
int main() {
    int n, x;     ll res=0;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> x;
        res+=x*U(x);
    }
    cout << res;
    return 0;
}

