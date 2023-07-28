#include <iostream>
using namespace std;

int main() 
{
    int i,n,s,dem;
    cin>>n;
    s=1;dem=0;
    for (i=2; i<=n; i++)
        s=s*i;
    while (s%10==0){
        dem++;
        s=s/10;
    }
    cout<<dem;
    return 0;
}