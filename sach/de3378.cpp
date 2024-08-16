//DE3378.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    map<string, int> h;
    cin>>n;
    while (n--) {
        cin>>s;
        if (h[s]==0) cout<<s<<endl;
        else cout<<s<<h[s]<<endl;
        h[s]++;
    }
    return 0;
}

