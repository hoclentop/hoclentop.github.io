#include <iostream>
using namespace std;

int main() 
{
    int n,c,d;
    cin>>n;
    d=n/10;
    c=n%10;
    if ((c%2 + d%2)==1)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}