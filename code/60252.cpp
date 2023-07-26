#include <iostream>
using namespace std;
int main()
{
    int x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    int a=y2-y1, b=x1-x2;
    int c=-x1*(y2-y1)-y1*(x1-x2);
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}