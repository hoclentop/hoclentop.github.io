#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string s;
    getline(cin,s);
    cout<<s[6]-48+s[8]-48;
    return 0;
}