#include <iostream>
using namespace std;

int main() 
{
    int n,s,i;
    cin>>n;
    s=1;
    for (i=2; i<=n; i++)
        s=s*i;
    while (s%10==0)
        s=s/10;
    cout<<s%10;
    return 0;
}