#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
typedef long long ll;
ll sqr(ll a){
    return a*a;
}
vector<ll>arr;
int s,limit=1e4;
int solve(ll n){
    bool is=true;
    int cnt=0;
    for(int i=0;i<s-1;i++){
        if(is&&sqr(sqr(sqr(arr[i])))<=n)cnt++; else is=false;
        if(sqr(arr[i]*arr[i+1])>n)break;
        if(sqr(arr[i]*arr[s-1])<n)continue;
        int l=i+1,r=s-1,m,ans;
        while(l<=r){
            m=(l+r)/2;
            if(sqr(arr[i]*arr[m])<=n){
                ans=m;
                l=m+1;
            } else {
                r=m-1;
            }
        }
        cnt+=(ans-i);
    }
    return cnt;
}
 
int main(){
    freopen("CHINUOC.INP","r",stdin);
    freopen("CHINUOC.OUT","w",stdout);
    int l=1e6;
 
    vector<bool>mark(l+1,true);
    for(int i=2;i<=l;i++){
        if(mark[i]){
            arr.push_back(i);
            for(int j=i*2;j<=l;j+=i)mark[j]=false;
        }
    }
 
    s=arr.size();
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<solve(n)<<endl;
    }
}
