#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string s;
    getline(cin,s);
    int dmax=0, d=0, v;
    for (int c=0;c<s.length(); c++) {
        if (s[c]!=' ') {
            d++;
            if (d>dmax) {
                dmax=d;
                v=c-d+1;
            }
        }
        else {
            d=0;
        }
    }
    cout<<s.substr(v,dmax);
    return 0;
}
