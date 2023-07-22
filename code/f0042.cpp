#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    int a,b,c,d;
    cin>>a>>b>>d;
    c=(d-b)/a;
    cout<<setprecision(3)<<fixed<<c;
    return 0;
}