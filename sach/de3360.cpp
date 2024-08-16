//DE3360.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; int d=0,dmax=0,k=0;
    cin >> n;
    cin.ignore();
    for(int i = 1; i<=n; i++){
      string s;
      getline(cin,s);
      s=s+"A";
      d=0;
      for(int i=0; i<s.length(); i++){
        if(s[i]=='W' || s[i]=='A' || s[i]=='R' ){
          if(d>dmax){
            dmax=d;
            k=1;
          }
          else if(d==dmax) k++;
          d=0;
        }
        else d++;
      }
    }
    if (dmax>0)  cout << dmax << " " << k;
    else   cout<<"NO";
    return 0;
}

