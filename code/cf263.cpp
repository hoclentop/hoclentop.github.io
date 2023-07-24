#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    int i,j,n;
    getline(cin,s);
    n=s.length();
    for (i=0; i<n; i++)
        for (j=i; j<n; j++)
            cout<<s.substr(i,j-i+1)<<endl;
    return 0;
}