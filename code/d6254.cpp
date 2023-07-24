#include <iostream>
using namespace std;
int main()
{
    int a, b, c=1, d=0;
    cin>>a>>b;
    for (int i=1; i<=b; i++)
        c*=a;
    while (c>0) {
        d++;
        c/=10;
    }
    cout<<d;
    return 0;
}