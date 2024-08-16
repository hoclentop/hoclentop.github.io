//DE3303.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=101;
string cs="0123456789ABCDEF";
ll n;
char a[N][N];   string F[N][N];
void bin2hex(string s){
    while (s[0]=='0') s.erase(0,1);
    while (s.length()%4!=0) s="0"+s;
    for (int i=0; i<s.length(); i+=4) {
        int p=0;
        for(int j=i; j<=i+3; j++) p=p*2+s[j]-48;
        cout<<cs[p];
    }
}
int main () {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> n;
    for (int i=1;i<=n;i++)
      for (int j=1;j<=n;j++)
        cin >> a[i][j];
    for (int i=0;i<=n;i++) F[0][i]=F[i][0]="";
    for (int i=1;i<=n;i++)
      for (int j=1;j<=n;j++)
        F[i][j]=max(F[i-1][j],F[i][j-1])+a[i][j];
    bin2hex(F[n][n]);
 }

