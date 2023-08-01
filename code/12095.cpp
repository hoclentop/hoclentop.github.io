#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string s;
    getline(cin,s);
    int dmax=0, d=0;
    for (int i=0;i<s.length(); i++) {
        if (s[i]==' ') {
            d=0;
        }
        else {
            d++;
            if (d>dmax) dmax=d;
        }
    }
    cout<<dmax;
    return 0;
}
