#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string s,p;
    int n,d;
    getline(cin,s);
    s=" "+s+" ";
    n=s.length();
    d=1;
    p="";
    for (int c=1; c<=n; c++){
      if (s[c]==' '){
        if (c>d)
            p=s.substr(d,c-d)+" "+p;
        d=c+1;
      }
      
      
    }
    cout<<p;
    return 0;
}