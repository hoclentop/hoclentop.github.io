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
    int a,b,c;
    cin>>a>>b;
    c=ucln(a,b);
    a=a/c;
    b=b/c;
    cout<<a<<" "<<b;
    return 0;
}