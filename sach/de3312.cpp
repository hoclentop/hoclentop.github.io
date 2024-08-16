//DE3312.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int dmax = 0,d = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] == '0') {
            d++;
            if (d>dmax) dmax=d;
        }
        else
            d = 0;
    }
    cout<<dmax;
    return 0;
}

