//DE3315.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <iostream>
using namespace std;
int main() {
    int x,n,k,d=0;
    long long s=0;
    cin>>k>>n;
    for (int i=0; i<n; i++) {
        cin>>x;
        if (x>k) {
            s+=x;
            d++;
        }
    }
    if (d>0) cout<<s<<endl<<d<<endl<<"TRUE";
    else cout<<"FALSE";
}

