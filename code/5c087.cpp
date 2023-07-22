#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    float a,b;
    cin>>a>>b;
    float c=a*b/100;
    cout<<setprecision(0)<<fixed;
    cout<<(c/12);
    return 0;
}