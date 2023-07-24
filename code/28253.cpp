#include <iostream>
using namespace std;
int main()
{
    int n,i,s=0;
    cin>>n;
    for (i=1; i<=n; i++) {
        if (i%2==0) s+=i;
        else s-=i;
    }
    cout<<s;
    return 0;
}