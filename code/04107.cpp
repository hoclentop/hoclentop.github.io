#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int n,z,x,y,k;
    cin>>n;
    for (x=1; x<=n; x++){
        for (y=x+1; y<=n; y++){
            k=x*x+y*y;
            z=int(sqrt(k));
            if (z*z==k && z<=n)
                cout<<x<<" "<<y<<" "<<z<<endl;
        }
    }
    return 0;
}