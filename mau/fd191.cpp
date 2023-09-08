#include <iostream>
using namespace std;

int main() 
{
    int n,x;
    cin>>n;
    for (x=1; x<=n; x+=2){
        if (n%x==0)
            cout<<x<<" ";
    }
    return 0;
}
