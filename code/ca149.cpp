#include <iostream>
using namespace std;

int main() 
{
    int a,b,i,j;
    cin>>a>>b;
    for (i=1; i<=b; i++)
        cout<<"*";
    cout<<endl;
    for (i=1; i<=a-2; i++){
        cout<<"*";
        for (j=1; j<=b-2; j++)
            cout<<" ";
        cout<<"*"<<endl;
    }
    for (i=1; i<=b; i++)
        cout<<"*";
    return 0;
}