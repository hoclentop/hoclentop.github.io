#include <iostream>
using namespace std;

int main() 
{
    int n,k;
    cin>>n;
    if (n%3!=0)
        cout<<"KHONG THE";
    else k=n/3;
    cout<<k-1<<" "<<k<<" "<<k+1;
    return 0;
}