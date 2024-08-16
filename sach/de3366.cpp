//DE3366.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int n,k;
string s;
bool f[31][31][101][201]={};
int main() {
    cin>>n>>k>>s;
    s+=s;
    int x,y,x2,i,j,d;
    for (d=0; d<n; d++) {
      for (i=0; i<2*n-d; i++) {
        j=i+d;
        for (x=0; x<k; x++) {
          for (y=0; y<k; y++) {
            //f[x][y][i][j]=false;
            x2=x + (s[i]=='B');
            if (x2<k && f[y][x2][i+1][j]==false)
                f[x][y][i][j]=true;
            x2=x + (s[j]=='B');
            if (x2<k && f[y][x2][i][j-1]==false)
                f[x][y][i][j]=true;
          }
        }
      }
    }
    int dem=0;
    for (i=0; i<n; i++)
      if (f[0][0][i][i+n-1]) dem++;
    cout<<dem;
}

