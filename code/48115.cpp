#include <iostream>
using namespace std;

int main() 
{
    int xa,xb,ya,yb;
    cin>>xa>>ya;
    cin>>xb>>yb;
    if (xa==xb)
        cout<<"Oy";
    else if (ya==yb)
        cout<<"Ox";
    else cout<<"KHONG";
    return 0;
}