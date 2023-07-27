#include <iostream>
using namespace std;

int main() 
{
    char c;
    int n;
    cin>>c>>n;
    int v=c-65;
    int y=(n+v)%26;
    cout<<char(y+65);
    return 0;
}