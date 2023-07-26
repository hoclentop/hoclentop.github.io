#include <iostream>
using namespace std;

int main() 
{
    int n,t,x;
    cin>>n;
    t=1;
    x=n;
    while (x>1){
        t=t*x;
        x=x-2;
    }
    cout<<t;
    return 0;
}