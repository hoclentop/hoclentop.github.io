#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int n,a;
    cin>>n;
    for (a=int(sqrt(n)); a>=1; a--)
        if (n%a==0){
            cout<<a<<" "<<n/a;
            return 0;
        }
    return 0;
}