//DE3391.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
const int N=1500*1500;  long long a[N+1], kq=0, sum, d=1, n;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    cin >> n;  sum=0;
    for (int i=1; i<=n*n; ++i)     {
        cin >> a[i];
        sum+=a[i];
    }
    sort(a+1, a+1+n*n);
    for (int i=2; i<=n*n; ++i)
        if (a[i]==a[i-1]) d++;
        else {
            kq=max(kq,sum-d*a[i-1]);
            d=1;
        }
    kq=max(kq,sum-d*a[n*n]);
    cout << kq;
}

