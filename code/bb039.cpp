#include <iostream>
using namespace std;
int main()
{
    int n, gio, phut, giay;
    cin>>n;
    phut=n/60;
    giay=n%60;
    gio=phut/60;
    phut=phut%60;
    cout<<gio<<":";
    if (phut<10) cout<<0;
    cout<<phut<<":";
    if (giay<10) cout<<0;
    cout<<giay;
    return 0;
}
