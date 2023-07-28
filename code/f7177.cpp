#include <iostream>
using namespace std;

int main() 
{
    string s;
    int dem,i;
    getline(cin,s);
    dem=0;
    for (i=0; i<=s.length()-1; i++)
        if ('0'<=s[i] && s[i]<='9')
            dem++;
    cout<<dem;
    return 0;
}