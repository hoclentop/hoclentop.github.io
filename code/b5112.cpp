#include <iostream>
#include <cmath>
using namespace std;
double kc(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}
double dt3giac(int x1, int y1, int x2, int y2, int x3, int y3) {
    double a=kc(x1,y1,x2,y2);
    double b=kc(x2,y2,x3,y3);
    double c=kc(x3,y3,x1,y1);
    double p=(a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
bool bangnhau(double x, double y) {
    return abs(x-y) < 0.000001;
}
int main() 
{
    int xA, yA, xB, yB, xC, yC, xM, yM;
    cin>>xA>>yA>>xB>>yB>>xC>>yC>>xM>>yM;
    double s0 = dt3giac(xA, yA, xB, yB, xC, yC);
    double s1 = dt3giac(xA, yA, xB, yB, xM, yM);
    double s2 = dt3giac(xB, yB, xC, yC, xM, yM);
    double s3 = dt3giac(xC, yC, xA, yA, xM, yM);
    if (bangnhau(s0,s1+s2+s3)) cout<<"YES";
    else cout<<"NO";
    return 0;
}
