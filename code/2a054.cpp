#include <iostream>
using namespace std;

int f[10000];
int main() 
{
    int a,d,n;
    cin>>a>>d>>n;
    f[1]=a;
    for (int i=2;i<=n;i++)
        f[i]=f[i-1]+d;
    cout<<f[n];
    return 0;
}