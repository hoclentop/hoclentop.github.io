#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=sqrt(n);
    if (k*k<n) k++;
    cout<<k*k;
    return 0;
}