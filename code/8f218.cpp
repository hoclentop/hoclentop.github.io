#include <iostream>
using namespace std;

int main() 
{
    int n,dem,i;
    int a[100000];
    cin>>n;
    for (i=1; i<=n; i++)
        cin>>a[i];
    dem=0;
    for (i=1; i<=n; i++)
        if (a[i]%40==0)
            dem++;
    cout<<dem;
    return 0;
}