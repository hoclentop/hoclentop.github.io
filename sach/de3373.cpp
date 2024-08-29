#include<bits/stdc++.h>
using namespace std;
signed main(){
     ios::sync_with_stdio(0); cin.tie(0);
     int n, q, p, l, r, x; 
     cin >> n >> q;
     vector<long long> a(n+1);
     for(int i = 1; i <= n; i++){
          cin >> a[i];
     }
     for(int i = 1; i <= q; i++){
          cin >> p;
          if(p == 1){
               cin >> x;
               a.erase(a.begin()+x);
          }
          if(p == 2){
               cin >> l >> r >> x;
               for(int j = l; j <= r; j++){
                    a[j] += x;
               }
          }
          if(p == 3){
               cin >> l >> r;
               long long s=0;
               for(int j = l; j <= r; j++){
                    s+=a[j];
               }
               cout << s << "\n";
          }
     }
}
