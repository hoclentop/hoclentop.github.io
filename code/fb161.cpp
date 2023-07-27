#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string s;
    getline(cin,s);
    int i,n;
    n=s.length();
    bool so=false;
    bool hoa=false;
    bool thuong=false;
    for (i=0; i<=n-1; i++){
        if ('0'<=s[i] && s[i]<='9')
            so=true;
        if ('A'<=s[i] && s[i]<='Z')
            hoa=true;
        if ('a'<=s[i] && s[i]<='z')
            thuong=true;
    }
    if (n<8) 
        cout<<"YEU";
    else 
    if (so==true && hoa==true && thuong==true)
        cout<<"MANH";
    else cout<<"THUONG";
    return 0;
}