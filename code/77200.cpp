#include <iostream>
using namespace std;

int main() 
{
    int n,x;
    cin>>n;
    if (n<2){
        cout<<"NO";
        return 0;
    }
    for (x=2; x<=n-1; x++)
        if (n%x==0){
            cout<<"NO";
            return 0;
        }
    cout<<"YES";
    return 0;
}