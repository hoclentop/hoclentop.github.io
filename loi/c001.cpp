//Code sai cho nao? huunam 20/3/2025
#include<bits/stdc++.h>
using namespace std;
int n,a[100005],b[100005],c[100005],dp[2][3];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i]>>b[i]>>c[i];
    int x, y;
    dp[1][0]=a[1]; 
    dp[1][1]=b[1];
    dp[1][2]=c[1];
    for(int i=2;i<=n;i++)
    {
        x=i%2; y=1-x;
        dp[x][0]=max(dp[y][1],dp[y][2])+a[i];
        dp[x][1]=max(dp[y][0],dp[y][2])+b[i];
        dp[x][2]=max(dp[y][0],dp[y][1])+c[i];
    }
    cout<<max({dp[x][0],dp[x][1],dp[x][2]});
    return 0;
}

// Link bai tap : https://oj.vnoi.info/problem/atcoder_dp_c hoac https://atcoder.jp/contests/dp/tasks/dp_c
