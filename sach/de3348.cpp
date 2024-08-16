//DE3348.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
long long n, a[20000];
int diem(int i, int j) {
    long long S=a[j]-a[i-1];
    if (S%2==1) return 0;
    int k= lower_bound(a+i, a+j, a[i-1]+S/2)-a;
    if (k>=j) return 0;
    return kq = 1+max(diem(i,k), diem(k+1,j));
}
int main() {
    int T;
    cin>>T; a[0]=0;
    while (T--) {
        cin>>n;
        for (int i=1; i<=n; i++) {
            cin>>a[i];
            a[i]+=a[i-1];
        }
        cout<<diem(1,n)<<endl;
    }
}

