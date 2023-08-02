#include <iostream>
using namespace std;

bool ktdoixung(string s){
    int n,j,i;
    n=s.length()-1;
    j=n;
    for (i=0; i<=n/2; i++){
        if (s[i]!=s[j]){
            return false;
        }
        else j=j-1;
    }
    return true;
}

int main() 
{
    string s,p;
    int n,d,i;
    getline(cin,s);
    n=s.length();
    for (d=n; d>=1; d--){
        for (i=1; i<=n+1-d; i++){
            p=s.substr(i,d);
            if (ktdoixung(p)==true){
                cout<<p;
                return 0;
            }
        }
    }
    return 0;
}