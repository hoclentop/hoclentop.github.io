#include <iostream>
using namespace std;

int main() 
{
    string s;
    getline(cin,s);
    int n=s.length();
    for (int i=0; i<=n; i++)
        cout<<s.substr(0,i)<<endl;
    return 0;
}