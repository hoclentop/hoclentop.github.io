//DE3372.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
vector<int> hamz(string s) {
	int n = (int) s.length();
	vector<int> z(n);
	for (int i = 1, l = 0, r = 0; i < n; ++i) {
		if (i <= r)
			z[i] = min (r - i + 1, z[i - l]);
		while (i + z[i] < n && s[z[i]] == s[i + z[i]])
			++z[i];
		if (i + z[i] - 1 > r)
			l = i, r = i + z[i] - 1;
	}
	return z;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t,k,d;
    string s,p;
    cin>>t;
    while(t--) {
        cin>>s>>p;
        k=p.length();
        d=0;
        vector<int> a=hamz(p+'Z'+s);
        for (int x : a)
            if (x==k) d++;
        if (d==0)
            cout<<-1<<endl;
        else {
            cout<<d<<endl;
            for (int i=0; i< a.size(); i++)
                if (a[i]==k) cout<<i-k<<" ";
            cout<<endl;
        }
    }
    return 0;
}

