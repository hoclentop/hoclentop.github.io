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
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int d = ucln(a, b);
    int e = ucln(c, d);
    cout << e;
    return 0;
}
