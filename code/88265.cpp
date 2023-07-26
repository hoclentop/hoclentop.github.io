#include <iostream>
#include <string>
using namespace std;
bool ktdxung(string s) {
    int n=s.length();
    int j=n-1;
    for (int i=0; i<n/2; i++) {
        if (s[i]!=s[j]) return false;
        j--;
    }
    return true;
}
int main()
{
    string s, p;
    getline(cin, s);
    int n=s.length();
    bool stop=false;
    for (int d=n; d>=1; d--) {
        if (stop) break;
        for (int i=0; i<=n-d; i++) {
            p=s.substr(i,d);
            if (ktdxung(p)) {
                cout<<p<<endl;
                stop=true;
            }
        }
    }
    return 0;
}