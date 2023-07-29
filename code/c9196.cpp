#include <iostream>
using namespace std;

int main() 
{
    int n,x,s;
    cin>>n;
    s=0;
    for (x=1; x<=n/2; x++){
        if (n%x==0)
            s=s+x;
    }
    if (s==n)
      cout<<"YES";
    else cout<<"NO";
    return 0;
}