#include <iostream>
using namespace std;
int n, a[1000];
int main()
{
    int i,j,u,v;
    cin>>n;
    for (i=1; i<=n; i++) cin>>a[i];
    cin >> u >> v;
    for (i=0; i<=(v-u-1)/2; i++)
        swap(a[u+i], a[v-i]);
    for (i=1; i<=n; i++)
        cout<<a[i]<<" ";
    return 0;
}
