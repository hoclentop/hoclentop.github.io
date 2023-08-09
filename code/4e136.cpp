#include <iostream>
using namespace std;

int main() 
{
    int n,k,x,y;
    cin>>n>>k;
    x=(k/2)-n;
    y=n-x;
    if (x<0 || y<0)
        cout<<-1;
    else cout<<y<<" "<<x;
    return 0;
}