#include <iostream>
using namespace std;
int scs(int k) {
    int s = 0;
    while (k > 0) {
        s++;
        k/=10;
    }
    return s;
}
int main()
{
    int x, n, t = 0;
    cin >> n;
    for (x = 1; x <=n; x++)
        t += scs(x);
    cout<<t;
    return 0;
}
