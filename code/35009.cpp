#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    double a,b,c;
    cin>>a>>b>>c;
    cout<<setprecision(2);
    cout<<fixed;
    cout<<a*a-b*b+c*c*c;
    return 0;
}