#include <iostream>
using namespace std;

int main() 
{
    int a,b,kq;
    char c;
    cin>>a>>b>>c;
    if (c==43)
        kq=a+b;
    if (c==42)
        kq=a*b;
    if (c==45)
        kq=abs(a-b);
    cout<<kq;
    return 0;
}