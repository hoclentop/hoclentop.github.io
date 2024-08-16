//DE3383.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n, d, c=0,z1,z2;
    cin >> n;
    vector <int> r,b,g;
    for (int i=1;i<=n;i++){
        char x;
        cin >> x >> d;
        if (x=='r') r.push_back(d);
        if (x=='b') b.push_back(d);
        if (x=='g') g.push_back(d);
      }
    sort (r.begin(),r.end());
    sort (b.begin(),b.end());
    sort (g.begin(),g.end());
    for (int i=0;i<r.size();i++)
        for (int j=0;j<b.size();j++) {
            z1=upper_bound(g.begin(),g.end(),abs(r[i]-b[j]))
                          -g.begin();
            z2 = lower_bound(g.begin(),g.end(),r[i]+b[j])
                          -g.begin();
            c+=z2-z1;
        }
    cout << c;
    return 0;
 }

