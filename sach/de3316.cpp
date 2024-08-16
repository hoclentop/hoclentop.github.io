//DE3316.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <iostream>
using namespace std;
int main() {
    int n, x, dem=0;  bool D[41]={};
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>x;
        D[x]=true;
    }
    for (int i=1; i<=40; i++)
        if (D[i]) dem++;
    cout<<dem<<endl;
    for (int i=1; i<=40; i++)
        if (D[i]) cout<<i<<" ";
}

