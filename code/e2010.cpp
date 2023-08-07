#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    float a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<setprecision(3);
    cout<<fixed;
    cout<<(a-b+c)*(b-a+d);
    return 0;
}