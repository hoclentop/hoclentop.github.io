#include <iostream>
using namespace std;

int main() 
{
    int a,b,c;
    cin>>a>>b>>c;
    if (a==b || a==c || c==b)
        cout<<"CAN";
    else if (a==b && b==c)
        cout<<"DEU";
    else cout<<"THUONG";
    return 0;
}