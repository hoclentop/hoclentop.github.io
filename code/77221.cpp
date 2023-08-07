#include <iostream>
using namespace std;

int main() 
{
    string s;
    int n,i;
    getline(cin,s);
    
    n=s.length();
    for (i=0; i<=n-1; i++)
        if (s[i]!='0' && s[i]!='1'){
            cout<<s[i]<<endl;
            cout<<"NO";
            return 0;
        }
    cout<<"YES";
    return 0;
}