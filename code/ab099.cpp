#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int a,b;
    float c;
    cin>>a>>b;
    c=int(sqrt(b)) - int(sqrt(a-1));
    cout<<c;
    return 0;
}