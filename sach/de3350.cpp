//DE3350.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,d,x,y,z,t,p,s=-1;
    cin>>n;
    for (d=1; d*d < n; d++)
        for (c=1; c<=d; c++)
            for (b=1; b<=c; b++) {
                p=n-d*d-c*c-b*b;
                if (p<=0 || p>b*b) continue;
                a=sqrt(p);
                if (a*a==p && s<a+b+c+d) {
                    x=a;y=b;z=c;t=d;
                    s=x+y+z+t;
                }
            }
    if (s<0) cout<<-1;
    else cout<<x<<" "<<y<<" "<<z<<" "<<t;
    return 0;
}

