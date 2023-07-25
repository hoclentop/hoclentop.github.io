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
    if (a==c ||b==d)
        cout<<b;
    else {
        if (c==d || b==c)
            cout<<c;
        else if (a==b)
            cout<<b;
        else cout<<d;
    }
    return 0;
}