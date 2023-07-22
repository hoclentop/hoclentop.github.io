#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    for (int x=1; x<=n; x++){
        if (n%x==0){
            cout<<x<<" ";
        }
    }
    return 0;
}