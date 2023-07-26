#include <iostream>
using namespace std;

int f[10000];
int main() 
{
    int n;
    cin>>n;
    f[1]=1;
    f[2]=2;
    for(int i=3; i<=n; i++){
      f[i]=f[i-1] + 2*f[i-2];
    }
    cout<<f[n];
    return 0;
}