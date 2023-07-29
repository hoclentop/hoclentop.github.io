#include <iostream>
using namespace std;

int main() 
{
    int n,d;
    cin>>n;
    d=n%100;
    if (d<10)
        cout<<0;
    cout<<d;
    return 0;
}