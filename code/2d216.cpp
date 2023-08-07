#include <iostream>
using namespace std;

int main() 
{
    int n,i;
    int a[100000];
    cin>>n;
    for (i=1; i<=n; i++){
        cin>>a[i];
    }
    for (i=1; i<=n-1; i++)
        if (a[i]%2 + a[i+1]%2 != 1){
            cout<<"NO";
            return 0;
        }
    cout<<"YES";
    return 0;
}