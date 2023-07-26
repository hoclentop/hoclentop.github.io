#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int a,b,c,p,q;
    cin>>a>>b>>c;
    cout<<setprecision(1)<<fixed;
    while (cin>>p>>q) {
        cout<<abs(a*p+b*q+c)/sqrt(a*a+b*b)<<endl;
    }
    return 0;
}