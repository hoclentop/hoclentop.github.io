//DE3347.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
bool nhohon(string a, string b) {
    if (a.length()==b.length()) return a<b;
    return a.length() < b.length();
}
int main() {
    string s;
    cin>>s;
    int nho=0,a, n = s.length()+1;
    s="s"+s+"s";
    string  p, pmax, pmin(n,'9');
    for (int i=1; i<=n; i++) {
        if (isdigit(s[i])) p+=s[i];
        else {
            if (isdigit(s[i-1])) {
                while (p[0]=='0' && p.length()>1)
                    p.erase(0,1);
                if (nhohon(p,pmin)) pmin=p;
                if (nhohon(pmax, p)) pmax=p;
            }
            p="";
        }
    }
    while (pmin.length()<pmax.length()) pmin='0'+pmin;
    p=string(pmax.length(), '0');
    for (int i=pmax.length()-1; i>=0; i--) {
        a=pmax[i]-pmin[i]-nho;
        if (a<0) {
            a+=10;
            nho=1;
        }
        else nho = 0;
        p[i]=a%10+48;
    }
    while (p[0]=='0' && p.length()>1) p.erase(0,1);
    cout<<p;
}

