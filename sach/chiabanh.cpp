#include<bits/stdc++.h>
using namespace std;
ifstream fi ("chiabanh.inp");
ofstream fo("chiabanh.out");
long long n,i,j;
deque <long long> dq;
deque<long long> :: iterator x;
int main() {
    fi>>n;
    for(i=sqrt(n);i>=1;i--)
        if(n%i==0) {
            if(i*i==n) dq.push_front(i);
            else {
                dq.push_front(i);
                dq.push_back(n/i);
            }
        }
    for(x:dq) {
        fo<<x<<" "<<n/x<<endl;
    }
}
