#include <iostream>
using namespace std;

int main() 
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if (a>b)
        swap(a,b);
    if (b>c)
        swap(b,c);
    if (c>d)
        swap(c,d);
    if (a>b)
        swap(a,b);
    if (b>c)
        swap(b,c);
    if (a>b)
        swap(a,b);
    if ((a==c && c!=d) || (a!=b && b==d))
        cout<<"YES";
    else cout<<"NO";
    return 0;
}