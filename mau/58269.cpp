#include <iostream>
using namespace std;
int ucln(int a, int b) {
    int r;
    while (b!=0) {
        r = a%b;
        a = b;
        b = r;
    }
    return a;
}
int x,y,z,a,b,c,m,n,d; 
int main()
{
    cin >> x >> a;
    cin >> y >> b;
    cin >> z >> c;
    m = x*b*c + y*a*c - z*a*b;
    n = a*b*c;
    d = ucln(m, n);
    cout << m / d << ' ' << n / d;
    return 0;
}
