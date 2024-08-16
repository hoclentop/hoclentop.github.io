//DE3382.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int a[1000001], n, t, k;
int main()
{
    string s1, s2;
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin>>t;
    while (t--) {
        cin>>s1>>s2;
        k=s2.length();
        n=0;
        for (int i=0; i<s1.length(); i++) {
            if (s1[i]==s2[0]) {
                bool trung=true;
                for (int j=1; j<k; j++)
                    if (s1[i+j]!=s2[j]) {
                        trung=false;
                        break;
                    }
                if (trung) a[++n]=i+1;
            }
        }
        if (n==0) cout<<-1;
        else {
            cout<<n<<endl;
            for (int i=1; i<=n; i++)
                cout<<a[i]<<" ";
        }
    }
    return 0;
}

