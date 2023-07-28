#include <iostream>
using namespace std;

int main() 
{
    int n,x,tong;
    cin>>n;
    tong=0;
    for (x=1; x<=n; x++){
        if (n%x==0)
            tong=tong+x;
    }
    cout<<tong;
    return 0;
}