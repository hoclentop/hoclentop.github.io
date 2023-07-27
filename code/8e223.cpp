#include <iostream>
using namespace std;
int a[10000], n;
int main()
{
    cin>>n;
    int i,u,v,x,y;
    for (i=1; i<=n; i++) cin>>a[i];
    cin>>u>>v;
    n=n-(v-u+1);
    for (i=u; i<=n; i++)
        a[i]=a[i+v+1-u];
    cin>>x>>y;
    for (i=n; i>=y; i--)
        a[i+1]=a[i];
    a[y]=x*x;
    n++;
    n++;
    a[n]=x*x;
    for (i=1; i<=n; i++)
        cout<<a[i]<<" ";
    return 0;
}