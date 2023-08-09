#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    float a,b,c,d,s;
    cin>>a>>b>>c>>d;
    s=(a+b+c+d)/4;
    cout<<setprecision(2)<<fixed;
    cout<<s;
    return 0;
}