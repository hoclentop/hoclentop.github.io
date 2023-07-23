#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int n = s.length();
    int smax=0, dem, v;
    for (int i=0; i<n; i++) {
        dem=0;
        for (int j=0; j<n; j++)
            if (s[i]==s[j]) dem++;
        if (dem>smax) {
            smax=dem;
            v=i;
        }
    }
    cout<<s[v]<<" "<<smax;
    return 0;
}