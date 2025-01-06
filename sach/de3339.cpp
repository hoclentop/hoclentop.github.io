//DE3339.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,t,a[100005],b[100005],res[100005],j=0,s=0;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin>>n>>t;
    for(int i=1;i<n+1;i++) cin>>a[i];
    for(int i=0;i<t;i++) cin>>res[i];
    sort(a+1,a+n+1);
    a[0]=0; b[0]=0;
    for(int i=1;i<=n;i++) {
        b[i]=b[i-1]+a[i]-a[i-1]-(a[i]==a[i-1]?0:1);
    }
    for(int i=0;i<t;i++){
        if(res[i]>b[n]) cout<<a[n]+res[i]-b[n]<<endl;
        else{
            int v=lower_bound(b,b+n+1,res[i])-b;
            cout<<a[v]-b[v]+res[i]-1<<endl;
        }
    }
    return 0;
}

