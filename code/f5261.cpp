#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    k=sqrt(2*n);
    if (k*k+k==2*n) cout<<k;
    else cout<<0;
    return 0;
}