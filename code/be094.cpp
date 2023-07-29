#include <iostream>
using namespace std;

int main() 
{
    int a,b,c,d,m;
    cin>>a>>b>>c>>d;
    m=a;
    if (m<a) 
        m=a;
    if (m<b)
        m=b;
    if (m<c)
        m=c;
    if (m<d)
        m=d;
    cout<<m;
    return 0;
}