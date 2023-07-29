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
    int n,a;
    cin>>n;
    for (a=n/2; a>=2; a--)
        if (snt(a) && snt(n-a)){
            cout<<a<<" "<<n-a;
            return 0;
        }
    return 0;
}