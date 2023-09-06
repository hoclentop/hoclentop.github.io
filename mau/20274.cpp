#include <iostream>
using namespace std;
int ucln(int m, int n) {
    int r;
    while (n!=0) {
        r = m % n;
        m = n;
        n = r;
    }
    return m;
}
int bcnn(int a, int b) {
    return a / ucln(a,b) * b;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int d = bcnn(a, b);
    int e = bcnn(c, d);
    cout << e;
    return 0;
}
