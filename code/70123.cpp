#include <iostream>
using namespace std;

int main() 
{
    int a[10000];
    int n;
    cin>>n;
    for (int i=0; i<=n-1; i++)
        cin>>a[i];
    for (int i=1; i<=n-1; i++){
        if (a[i]*a[i-1]>=0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}