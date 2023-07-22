#include <iostream>
using namespace std;

int main() 
{
    int t,giay,gio,phut;
    cin>>t;
    giay=t%100;
    gio= t/10000;
    phut= (t/100)%100;
    cout<<gio<<" "<<phut<<" "<<giay;
    return 0;
}