#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    float a,pi;
    cin>>a;
    pi=3.1415926;
    cout<<setprecision(6);
    cout<<fixed;
    cout<<2*a*pi<<endl;
    cout<<a*a*pi;
    return 0;
}