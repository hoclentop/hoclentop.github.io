#include <iostream>
using namespace std;

int main() 
{
    int a,b,c,d;
    cin>>a>>b;
    cin>>c>>d;
    int s=b*d*(a*d-b*c);
    if (s>0)
        cout<<a<<" "<<b;
    else cout<<c<<" "<<d;
    return 0;
}