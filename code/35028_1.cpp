#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    float s=sqrt(pow(a-c,2)+pow(b-d,2));
    cout<<setprecision(3)<<fixed<<s;
    return 0;
}