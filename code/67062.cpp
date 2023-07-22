#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() 
{
    string s;
    getline(cin,s);
    cout<<char(toupper(s[1]))<<char(toupper(s[5]));
    return 0;
}