#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s,p;
    cin>>s>>p;
    if (s.length()>p.length()) cout<<s;
    else if (s.length()<p.length()) cout<<p;
    else if (s>p) cout<<s;
    else cout<<p;
    return 0;
}