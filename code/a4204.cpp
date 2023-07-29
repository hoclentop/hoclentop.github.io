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
    int n;
    cin>>n;
    n++;
    while (snt(n)==false)
        n++;
    cout<<n;
    return 0;
}