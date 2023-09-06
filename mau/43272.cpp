#include <iostream>
#include <string>
using namespace std;
int main()
{
    string x, y;
    getline(cin, x);
    getline(cin, y);
    int d = x.length();
    while (y.find(x) != string::npos) {
        y.erase (y.find(x), d);
    }
    cout<<y;
    return 0;
}
