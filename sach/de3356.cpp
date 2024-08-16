//DE3356.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
long long n,k=1,dem=0;
string s;
int main()
{
    cin>>n>>s;
    s=s+"A";
    for (long long i=1;i<=n;i++)
        if (s[i]==s[i-1])
            k++;
        else
        {
            dem=dem+k/2;
            k=1;
        }
    cout<<dem;
    return 0;
}

