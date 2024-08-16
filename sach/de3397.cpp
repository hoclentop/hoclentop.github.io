//DE3397.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e2 + 1;
int a[N][N], vs[N], x[N], y[N], n;
bool tim(int i) {
    if(vs[i]) return 0;
    vs[i] = 1;
    for(int j = 1; j <= n; j++) {
	 if (a[i][j]) {
            if(y[j]==0) {
            	  x[i] = j;
            	  y[j] = i;
            	  return true;
            }
            if(tim(y[j])) {
                x[i] = j;
                y[j] = i;
            	  return true;
            }
    	 }
    }
    return false;
}
int cal() {
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		memset(vs, 0, sizeof(vs));
		if (tim(i)) cnt++;
	}
	return cnt;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    cin >> n;
    vector < vector <int>> edge;
    for (int i = 1; i <= n; i++) {
    	for (int j = 1; j <= n; j++) {
    		int x;
    		cin >> x;
    		edge.push_back({x, i, j});
		}
	}
	sort(edge.begin(), edge.end());
	int l = 0, r = edge.size() - 1, m, ans;
	while (l <= r) {
		memset(a, 0, sizeof(a));
		memset(x, 0, sizeof(x));
		memset(y, 0, sizeof(y));
		m = (l + r) / 2;
		for (int j = 0; j <= m; j++)
			a[edge[j][1]][edge[j][2]] = 1;
		if (cal() == n) {
			ans = edge[m][0];
			r = m - 1;
		} else  l = m + 1;
	}
	cout << ans << '\n';
}

