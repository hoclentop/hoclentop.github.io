#include <iostream>
using namespace std;

int main() 
{
    int n,x,dem;
    cin>>n;
    dem=0;
    for (x=1; x<=n; x++){
        if (n%x==0)
            dem++;
    }
    cout<<dem;
    return 0;
}