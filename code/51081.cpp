#include <iostream>
using namespace std;

int main() 
{
    int a,b,c,ddtp,tt;
    cin>>a>>b>>c;
    ddtp=2*(a*b+b*c+a*c);
    tt=a*b*c;
    cout<<ddtp<<endl<<tt;
    return 0;
}