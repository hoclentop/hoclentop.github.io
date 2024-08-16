//DE3379.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int n;
bool ktsnt(long long k) {
    if (k<2) return false;
    int ck = sqrt(k);
    for (int x=2; x<=ck; x++)
        if (k % x == 0) return false;
    return true;
}
int main()
{
    long long dem, y, s;
    cin>>n;
    dem=0;
    int cn=sqrt(n);
    for (int p=2; p<=cn; p++) {
        if (!ktsnt(p)) continue;
        y=p; s=1;
        while (y<=n) {
            s+=y;
            if (ktsnt(s)) dem++;
            y*=p;
        }
    }
    cout<<dem;
    return 0;
}

