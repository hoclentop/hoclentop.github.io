//DE3390.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
long long a[30001], n, sum, kq;
int main(){
    cin >> n;
    for (int i=1; i<=n; ++i){
        cin >> a[i];
        sum+=a[i];
    }
    for (int i=n; i>=1; --i){
        sum=sum-a[i];
        kq+=a[i]*sum;
    }
    cout << kq;
}

