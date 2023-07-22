#include <iostream>
using namespace std;

int main() 
{
    int n,k,b;
    cin>>n>>k;
    b=k;
    while (b<=n){
        cout<<b<<" ";
        b=b+k;
    }
    return 0;
}