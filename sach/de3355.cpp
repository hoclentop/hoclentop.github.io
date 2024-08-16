//DE3355.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int n,m,dem;
int tongcs(int k){
    int s=0;
    while (k>0){
        s=s+k%10;
        k/=10;
    }
    return s;
}
int main() {
    cin>>n;
    m=n-n%10; dem=0;
    for (int k=m;k<=n;k++)
        if (tongcs(k)%2==0)
            dem++;
    dem=dem+m/2-1;
    cout<<dem;
    return 0;
}

