#include <iostream>
using namespace std;

int main() 
{
    int a,b,c,n;
    cin>>a>>b>>n;
    c=b;
    while(c<=n){
      if (c%a==0)
          cout<<c<<" ";
      c=c+b;
    }
    return 0;
}