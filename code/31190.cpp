#include <iostream>
using namespace std;

int ucln(int a,int b){
    while (a!=b){
        if (a>b)
            a=a-b;
        else
            b=b-a;
    }
}

int main() 
{
    int a,b,c,d,m,n,u;
    cin>>a>>b;
    cin>>c>>d;
    m=a*d+b*c;
    n=b*d;
    u=ucln(m,n);
    m=m/u;
    n=n/u;
    cout<<m<<" "<<n;
    return 0;
}