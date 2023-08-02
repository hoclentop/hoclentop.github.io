#include <iostream>

#include <string>

using namespace std;


int main() 
{

    string s;

    int n,j,i;

    getline(cin,s);

    n=s.length()-1;

    j=n;

    for (i=0; i<=n/2; i++){

        if (s[i]!=s[j]){

            cout<<"NO";

            return 0;

        }

        else j=j-1;

    }

    cout<<"YES";

    return 0;

}