#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<min(a,min(c,b));
    cout<<" "<<max(a,max(b,c));
    return 0;
}