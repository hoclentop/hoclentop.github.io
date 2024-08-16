//DE3313.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool doixung(ll m){
  string k,s;
  s = k = to_string(m);
  reverse(s.begin(), s.end());
  return s==k;
}
int main()
{
    ll N = 1e7;
    vector<bool> snt(N+1,true);
    snt[0] = snt[1] = false;
    for(int i=2;i*i<=N;i++){
      if(snt[i]==true){
        for(int j = i*i; j<=N;j+=i){
          snt[j] = false;
        }
      }
    }
    ll a,b,res = 0;
    cin>>a>>b;
    ll m=sqrt(a);
    if (m*m<a) m++;
    ll n=sqrt(b);
    for(ll i = m;i<=n;i++)
        if(snt[i] && doixung(i))
          res++;
    cout<<res;
    return 0;
}

