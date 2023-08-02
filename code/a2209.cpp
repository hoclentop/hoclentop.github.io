#include <iostream>
using namespace std;

int main() 
{
    int n,i;
    int a[1000000];
    cin>>n;
    for (i=1; i<=n; i++)
        cin>>a[i];
    for (i=2; i<=n; i++)
        if (a[i]<a[i-1]){
            cout<<"NO";
            return 0;
        }
    cout<<"YES";
    return 0;
}