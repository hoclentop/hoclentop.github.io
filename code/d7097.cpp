#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    int n,k;
    cin>>n;
    k=sqrt(n);
    if (k*k==n) cout<<"TRUE";
    else cout<<"FALSE";
    return 0;
}
