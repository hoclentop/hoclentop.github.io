#include <iostream>
#include <string>
using namespace std;
bool ktdoixung(string s) {
    int n=s.length()-1;
    int i=0;
    while (i<n && s[i]==s[n]) {
        i++;
        n--;
    }
    return i>=n;
}
int main()
{
    string s, p;
    getline(cin,s);
    int i,j,n=s.length();
    for (i=0; i<n; i++)
        for (j=i; j<n; j++) {
            p=s.substr(i,j-i+1);
            if (ktdoixung(p)) cout<<p<<endl;
        }
    return 0;
}