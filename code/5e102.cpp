#include <iostream>

using namespace std;


int main() 
{

    int n,dem,c;

    cin>>n;

    dem=0;

    while (n>0){

        c=n%10;

        if (c==0)

            dem++;

        n=n/10;

    }
    
    cout<<dem;
return 0;

}