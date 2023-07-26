#include <iostream>
using namespace std;

int main() 
{
    string x,y;
    getline(cin,x);
    getline(cin,y);
    if (y.find(x)!=string::npos)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}