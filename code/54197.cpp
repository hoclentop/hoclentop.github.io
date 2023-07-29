#include <iostream>
using namespace std;

int tonguoc(int n){
    int s,x;
    s=0;
    for (x=1; x<=n/2; x++){
        if (n%x==0)
            s=s+x;
    }
    return s;
}

int main() 
{
    int n;
    cin>>n;
    for (int x=1; x<=n; x++)
        if (tonguoc(x)==x)
            cout<<x<<" ";
    return 0;
}