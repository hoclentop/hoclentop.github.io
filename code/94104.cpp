#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    float x,a,b;
    cin>>a>>b;
    x=0;
    if (a!=0){
        x=-b/a;
        cout<<setprecision(3)<<fixed;
        cout<<x;
    }
     if (a==0 && b==0)
        cout<<"MOI X";
     if (a==0 && b!=0)
        cout<<"VO NGHIEM";
    return 0;
}