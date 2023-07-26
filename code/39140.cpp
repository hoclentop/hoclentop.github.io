#include <iostream>

using namespace std;


int main() 
{

    int a,b;

    for (a=1; a<=9; a++){

        for (b=0; b<=a; b++)

            if (a-b==0 || a-b==1 || a-b==4 || a-b==9)

                cout<<a<<b<<endl;

    }

    cout<<90;

    return 0;

}