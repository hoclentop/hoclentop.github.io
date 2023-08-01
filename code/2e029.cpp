#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    float a,b,c;
    cin>>a>>b>>c;
    float p=a+b+c;
    cout<<setprecision(2)<<fixed;
    cout<<p<<endl;
    p=p/2;
    float s=sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<s;
    return 0;
}