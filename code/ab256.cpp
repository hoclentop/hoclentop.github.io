#include <iostream>
using namespace std;
int main()
{
    int n, c=1, d=0;
    cin>>a;
    for (int i=1; i<=n; i++)
        c*=i;
    while (c>0) {
        d++;
        c/=10;
    }
    cout<<d;
    return 0;
}