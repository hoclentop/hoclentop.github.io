#include <iostream>
using namespace std;

int main() 
{
    int x1,x2,y1,y2,kc;
    cin>>x1>>y1;
    cin>>x2>>y2;
    kc=abs(x1-x2)+abs(y1-y2);
    cout<<kc;
    return 0;
}