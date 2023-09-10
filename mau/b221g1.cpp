#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int dem=0;
    getline(cin,s);
    for(int i = 0; i<s.length();i++)
        if(s[i]=='A')
            dem++;
    cout << dem;
    return 0;
}
