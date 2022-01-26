#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int N=1e6;
bool a[N+1];
ll t,res,n,b[N+1]={};

void process()
{
    fill(a,a+N+1,1);
    a[0]=a[1]=0;
    for (int i=2; i<=N; i++)
    if (a[i])
        for (int j=2; j<=N/i; j++) a[i*j]=0;
    b[2]=1;
    for (int i=3; i<=N; i++)
        if (a[i]) b[i]=b[i-1]+1;
        else b[i]=b[i-1];
    cin>>t;
    bool kt;
    for (ll tt=1; tt<=t; tt++)
    {
        cin>>n;
        if (n<36) cout<<0<<endl;
        else{
            ll tam=sqrt(n),r=sqrt(sqrt(tam));
            res=b[r];
            kt=false;
            for (ll i=2; i<=tam; i++)
            if (a[i])
            {
                for (ll j=i+1; j<=tam; j++)
                    if (a[j]){
                        //if (i*j*j*i<=n)
                        if (i*j<=tam)
                            res++;
                    else{
                        kt=false;
                        break;
                    }
                    }
                if (kt) break;
            }
            cout<<res<<endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("chinuoc.inp","r",stdin);
    freopen("chinuoc.out","w",stdout);
    process();
    return 0;
}
