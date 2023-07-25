#include <iostream>
using namespace std;

int main() 
{
    int a,b,c,d,s;
    cin>>a>>b>>c;
    d=max(a,max(b,c));
    s=a*b*c/(2*d);
    cout<<s;
    return 0;
}