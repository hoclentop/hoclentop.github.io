#include <iostream>
using namespace std;

int souoc(int n){
    int dem,x;
    dem=0;
    for (x=1; x<=n; x++){
        if (n%x==0)
            dem++;
    }
    return dem;
}

int main() 
{
    int a,b,dem,x;
    cin>>a>>b;
    dem=0;
    for (x=a; x<=b; x++)
        if (souoc(x)%2==1)
            dem++;
    cout<<dem;
    return 0;
}