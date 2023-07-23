#include <iostream>
using namespace std;
int main()
{
    int i,n, a[1000],k,v;
    cin>>n;
    for (i=1; i<=n; i++) cin>>a[i];
    cin>>k;
    v=-1;
    for (i=1; i<=n; i++) 
        if (a[i]==k) {
            v=i;
            break;
        }
    cout<<v;
    return 0;
}