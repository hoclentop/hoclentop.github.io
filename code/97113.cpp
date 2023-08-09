#include <iostream>
#include <cmath>
using namespace std;

int sqr(int n){
  return n*n;
}

int main() 
{
    int xk,yk,xm,ym,r;
    cin>>xk>>yk>>r;
    cin>>xm>>ym;
    float km;
    km=sqrt(sqr(xm-xk)+sqr(ym-yk));
    if (km==r)
        cout<<"TREN";
    if (km>r)
        cout<<"NGOAI";
    if (km<r)
        cout<<"TRONG";
    return 0;
}