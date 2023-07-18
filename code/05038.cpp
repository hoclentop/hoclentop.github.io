#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int k, n;
    cin>>n;
    k=sqrt(n);
    for (int x=0; x<=k; x++)
        cout<<x*x<<" ";
    return 0;
}
