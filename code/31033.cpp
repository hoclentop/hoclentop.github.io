#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    float h, v, g;
    cin>>h;
    g=9.8;
    v=sqrt(2*g*h);
    cout<<setprecision(1)<<fixed;
    cout<<v;
    return 0;
}
