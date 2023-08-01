#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    float a;
    cin>>a;
    int b=a;
    float c=(a-b)*60;
    int d=c;
    int e=round((c-d)*60);
    cout<<b<<" "<<d<<" "<<e;
    return 0;
}
