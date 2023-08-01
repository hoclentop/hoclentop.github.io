#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int a,b,c;
    cin>>a>>b>>c;
    int x=min(a, min(b,c));
    int z=max(a, max(b,c));
    int y=a+b+c-x-z;
    cout<<x<<" "<<y<<" "<<z;
    return 0;
}
