#include <iostream>
using namespace std;

int tonguoc(int n){
    int s,x;
    s=0;
    for (x=1; x<=n; x++){
        if (n%x==0)
            s=s+x;
    }
    return s;
}

int main() 
{
    int a,b,dem,x;
    cin>>a>>b;
    dem=0;
    for (x=a; x<=b; x++)
        if (tonguoc(x)%2==1)
            dem++;
    cout<<dem;
    return 0;
}