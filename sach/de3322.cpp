//DE3322.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <iostream>
using namespace std;
bool P[1000001];  int n;
int main() {
    cin>>n;
    int x, i=-n-1, dmin=n+2;
    for (x=1; x<=1000000; x++) P[x]=true;
    P[1]=false;
    for (x=2; x<=1000; x++)
        for (int y=x*x; y<=1000000; y+=x)
            P[y]=false;
    for (int j=1; j<=n; j++) {
        cin >> x;
        if (P[x]) {
            dmin=min(dmin, j-i+1);
            i=j;
        }
    }
    if (dmin>n) cout<<-1;
    else cout<<dmin;
}

