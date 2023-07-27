#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int x,y;
    string s;
    cin>>x>>y;
    cin>>s;
    for (int i=0; i<=s.length()-1; i++){
        if (s[i]==85) y++;
        if (s[i]==82) x++;
        if (s[i]==76) x--;
        if (s[i]==68) y--;
    }
    cout<<x<<" "<<y;
    return 0;
}