#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long dem=0,a,b;
	freopen("TAMGIAC.INP","r",stdin);
	freopen("TAMGIAC.OUT","w",stdout);
	cin >> a >> b;
	cout << (a+b-1)-(abs(a-b)+1)+1;
}
