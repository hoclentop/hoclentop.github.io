#include <iostream>
using namespace std;

int tonguoc(int n){
    int s,x;
    s=0;
    for (x=1; x<=n/2; x++){
        if (n%x==0)
            s=s+x;
    }
    return s;
}

int main() 
{
    int n,dem,a,b;
    cin>>n;
    dem=0;
    for (a=1; a<=n; a++){
        b=tonguoc(a);
        if (a<b && tonguoc(b)==a){
            cout<<a<<" "<<b<<endl;
            dem++;
        }
    }
    if (dem==0)
        cout<<0;
    return 0;
}