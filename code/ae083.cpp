#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    double xA, xB, xC, yA, yB, yC, xD, yD, a, b, c, d, e;
    double s, s1, s2, p1, p2;

    cin >> xA >> yA;
    cin >> xB >> yB;
    cin >> xC >> yC;
    cin >> xD >> yD;

    a = sqrt(pow(xC - xB, 2) + pow(yC - yB, 2));
    b = sqrt(pow(xC - xA, 2) + pow(yC - yA, 2));
    c = sqrt(pow(xB - xA, 2) + pow(yB - yA, 2));
    d = sqrt(pow(xD - xA, 2) + pow(yD - yA, 2));
    e = sqrt(pow(xC - xD, 2) + pow(yC - yD, 2));

    p1 = (a + b + c) / 2;
    p2 = (b + d + e) / 2;

    s1 = sqrt(p1 * (p1 - a) * (p1 - b) * (p1 - c));
    s2 = sqrt(p2 * (p2 - b) * (p2 - d) * (p2 - e));

    s = s1 + s2;

    cout << fixed << setprecision(1) << s << endl;

    return 0;
}
