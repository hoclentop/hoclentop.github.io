#include <iostream>
using namespace std;

int main() 
{
    int a,b,c,d,k;
    cin>>a>>b>>c>>d;
    k=0;
    if (a>b)
        swap(a,b);
    if (b>c)
        swap(b,c);
    if (c>d)
        c=d;
    k=max(a,max(b,c));
    cout<<k;
    return 0;
}