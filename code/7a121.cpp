#include <iostream>
using namespace std;

int main() 
{
    int a,b;
    cin>>a>>b;
    if (a%b==0 || b%a==0)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}