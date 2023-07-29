#include <iostream>
using namespace std;

bool snt(int n){
    int x;
    cin>>n;
    if (n<2)
        return false;
    for (x=2; x<=n-1; x++)
        if (n%x==0)
            return false;
    return true;
}

int main() 
{
    int a,b,dem,x;
    cin>>a>>b;
    dem=0;
    for (x=a; x<=b; x++)
        if (snt(x))
            dem++;
    cout<<dem;
    return 0;
}