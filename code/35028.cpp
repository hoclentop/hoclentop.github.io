#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    float s=sqrt((a-c)*(a-c)+(b-d)*(b-d));
    cout<<setprecision(3)<<fixed<<s;
    return 0;
}