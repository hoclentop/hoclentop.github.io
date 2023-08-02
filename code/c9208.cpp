#include <iostream>
using namespace std;

int main() 
{
    int a,b,k,t,i;
    cin>>a>>b>>k;
    a=a%b;
    for (i=1; i<=k; i++){
        a=a*10;
        t=a/b;
        a=a%b;
    }
    cout<<t;
    return 0;
}