#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int n,dem,a;
    cin>>n;
    dem=0;
    for (a=1; a<=sqrt(n); a++)
        if (n%a==0)
            dem++;
    cout<<dem<<endl;
    return 0;
}