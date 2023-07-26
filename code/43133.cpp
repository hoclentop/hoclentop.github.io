#include <iostream>
using namespace std;

int main() 
{
    int n,c;
    cin>>n;
    while (n>0){
        c=n%10;
        if (c%2==0){
            cout<<"NO";
            return 0;
        }
        n=n/10;
    }
    cout<<"YES";
    return 0;
}