#include <iostream>
using namespace std;

int main() 
{
    string x,y;
    getline(cin,x);
    getline(cin,y);
    char c;
    for (c='a'; c<='z'; c++)
        if (x.find(c)!=string::npos && y.find(c)!=string::npos)
            cout<<c;
    return 0;
}