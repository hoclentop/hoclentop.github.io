#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    string cs[] = {"IV","IX","XL","XC","CD","CM", "I","V","X","L","C","D","M"};
    int gt[] = {4,9,40,90,400,900, 1,5,10,50,100,500,1000};
    cin>>s;
    int v, t=0;
    for (int i=0; i<13; i++) {
        while (s.find(cs[i])!=string::npos) {
            v = s.find(cs[i]);
            s.erase(v, cs[i].length());
            t+=gt[i];
        }
    }
    cout<<t;
    return 0;
}