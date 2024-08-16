//DE3321.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <iostream>
using namespace std;
int main() {
    long long n,k,d;
    cin>>n;
    k=n/5;  d=n%5;
    if (d>0) k++;
    if (d==4) k++;
    cout<<k;
    return 0;
}

