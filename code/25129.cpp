#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string s;
    int n,i;
    bool xd;
    getline(cin,s);
    xd=true;
    n=s.length();
    for (i=0; i<=n-1; i++){
        if (48<=s[i] && s[i]<58){
            cout<<s[i];
            xd=false;
        }
        else if (xd==false){
            cout<<endl;
            xd=true;
        }
    }
    return 0;
}