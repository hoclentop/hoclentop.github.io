#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string s;
    int k;
    getline(cin,s);
    int n=s.length();
    for (int i=0; i<=n-1; i++){
        if (s[i]>57) 
            k=i;
    }
    cout<<s[k];
    return 0;
}