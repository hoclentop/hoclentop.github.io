#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int n,i;
    cin>>n;
    string g[100000];
    g[1]="A";
    g[2]="B";
    for (i=3; i<=n; i++)
        g[i]=g[i-2]+g[i-1];
    cout<<g[n];
    return 0;
}