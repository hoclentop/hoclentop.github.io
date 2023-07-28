#include <iostream>
using namespace std;

int main() 
{
    int a,b,n,dem,x,d;
    cin>>a>>b;
    d=0;
    for (n=a; n<=b; n++){
        dem=0;
        for (x=1; x<=n; x++)
            if (n%x==0)
                dem++;
        if (dem==3)
        d++;
    }
    cout<<d;
    return 0;
}