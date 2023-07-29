#include <iostream>
using namespace std;

int main() 
{
    int n,n2,s,c;
    cin>>n;
    n2=n;s=0;
    while (n>0){
        c=n%10;
        s=s*10+c;
        n=n/10;
    }
    if (s==n2)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}