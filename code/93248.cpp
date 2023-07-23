#include <iostream>
#include <string>
using namespace std;
int main()
{
    string p;
    getline(cin,p);
    int n = p.length();
    int s=0, k=0;
    for (int i=0; i<n; i++) {
        if (p[i]>='0' && p[i]<='9')
            k=k*10+p[i]-48;
        else {
            s+=k;
            k=0;
        }
    }
    cout<<s;
    return 0;
}