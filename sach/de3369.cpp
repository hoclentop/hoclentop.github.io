//DE3369.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <iostream>
using namespace std;
int main() {
    int n, d, m, dem=0, x;
    cin>>n>>d>>m;
    for (int i=0; i<n; i++) {
        cin>>x;
        if (x%d==0 || x%m==0) dem++;
    }
    cout<<dem;
    return 0;
}

