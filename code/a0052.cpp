#include <iostream>
using namespace std;

int main() 
{
    int n,k,kq;
    cin>>k>>n;
    kq=(n+k-1)/k*k;
    cout<<kq;
    return 0;
}