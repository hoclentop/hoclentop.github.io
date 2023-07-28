#include <iostream>
using namespace std;

int main() 
{
    int n,d,c;
    cin>>n;
    d=10;
    while (n>0){
        c=n%10;
        if (c>d){
            cout<<"NO";
            return 0;
        }
        n=n/10;
        d=c;
    }
    cout<<"YES";
    return 0;
}