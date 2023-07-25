#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() 
{
    float a,b,c,denta,x1,x2;
    cin>>a>>b>>c;
    denta=b*b-4*a*c;
    if (denta<0)
        cout<<"VO NGHIEM";
    else {
      x1=(-b-sqrt(denta))/(2*a);
      x2=(-b+sqrt(denta))/(2*a);
    }
    cout<<setprecision(1)<<fixed;
    cout<<x1<<" "<<x2;
    return 0;
}