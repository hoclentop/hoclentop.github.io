#include <iostream>
using namespace std;

int main() 
{
    int n,k;
    cin>>n;
    k=0;
    while (n>0){
        k=10*k+n%10;
        n=n/10;
    }
    if (k%13==0)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}