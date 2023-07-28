#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    int n;
    float i,s;
    cin>>n;
    s=0;
    for (i=1; i<=n; i++)
        s=s+1/i;
    cout<<setprecision(5)<<fixed;
    cout<<s;
    return 0;
}