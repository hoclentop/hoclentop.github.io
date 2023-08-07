#include <iostream>
using namespace std;

int ucln(int a, int b){
    while (a!=b){
        if (a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;
}

int main() 
{
    int a,b;
    cin>>a>>b;
    if (ucln(a,b)==1)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}