#include <iostream>
using namespace std;
int a[1000], n;
int main()
{
    int i;
    cin>>n;
    for (i=1; i<=n; i++) cin>>a[i];
    cout<<a[1];
    for (i=2; i<=n; i++) {
        if (a[i] <= a[i-1]) cout << endl;
        cout << a[i] <<" ";
    }
    return 0;
}
