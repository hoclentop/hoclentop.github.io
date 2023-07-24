#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int x=1;
    while (n>0) {
        if (x%k!=0) n--;
        x++;
    }
    cout<<x-1;
    return 0;
}