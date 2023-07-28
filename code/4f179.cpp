#include <iostream>
using namespace std;

int main() 
{
    int n,dem;
    cin>>n;
    dem=0;
    while (n>0){
        dem++;
        n=n/10;
    }
    cout<<dem;
    return 0;
}