#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    float a,b;
    cin>>a>>b;
    cout<<setprecision(4);
    cout<<fixed;
    cout<<(a+b)*2<<endl;
    cout<<a*b;
    return 0;
}