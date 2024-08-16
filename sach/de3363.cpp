//DE3363.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5 + 1;
int n, a[N], las[N], pre_las[N];
struct ST {
    int n; vector <ll> seg, lazy, save_seg;
    ST(int _n): n(_n), seg(4*_n + 1, 0), lazy(4 * _n + 1, 0), save_seg(4 * _n + 1, 0) {};
    void build(int l, int r, int node) {
        if (l == r) {
            save_seg[node] = 1;
            return;
        } int m = (l + r) / 2;
        build(l, m, node * 2);
        build(m + 1, r, node * 2 + 1);
        save_seg[node]=save_seg[node*2] + save_seg[node*2+1];
    }
    void push(int node) {
        seg[node * 2] += lazy[node] * save_seg[node * 2];
        lazy[node * 2] += lazy[node];
        seg[node*2+1] += lazy[node] * save_seg[node*2 + 1];
        lazy[node * 2 + 1] += lazy[node];
        lazy[node] = 0;
    }
    void up_point(int u, int v, int l, int r, int node) {
        if (u > r || l > v) return;
        if (u <= l && r <= v) {
            seg[node] = save_seg[node] = 0;
            return;
        } int m = (l + r) / 2;
        push(node);
        up_point(u, v, l, m, node * 2);
        up_point(u, v, m + 1, r, node * 2 + 1);
        seg[node] = seg[node * 2] + seg[node * 2 + 1];
        save_seg[node]=save_seg[node*2]+save_seg[node*2+1];
    }
    void up_range(int u,int v,int l,int r,int node,int val){
        if (u > r || l > v) return;
        if (u <= l && r <= v) {
            seg[node] += save_seg[node] * val;
            lazy[node] += val;
            return;
        }
       int m = (l + r) / 2;
        push(node);
        up_range(u, v, l, m, node * 2, val);
        up_range(u, v, m + 1, r, node * 2 + 1, val);
        seg[node] = seg[node * 2] + seg[node * 2 + 1];
    }
    ll get(int u, int v, int l, int r, int node) {
        if (u > r || l > v) return 0;
        if (u <= l && r <= v) return seg[node];
        int m = (l + r) / 2;
        push(node);
        return get(u,v,l,m,node*2)+get(u,v,m+1,r,node*2+1);
    }
};
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    ST S(n);
    S.build(1, n, 1);
    ll ans = 0;
    for(int i = 1; i <= n; i++) {
        ans += S.get(las[a[i]] + 1, i - 1, 1, n, 1);
        if (las[a[i]]) {
            S.up_point(las[a[i]], las[a[i]], 1, n, 1);
            S.up_range(pre_las[a[i]]+1,las[a[i]]-1,1,n,1,-1);
        }
        S.up_range(las[a[i]] + 1, i - 1, 1, n, 1, 1);
        pre_las[a[i]] = las[a[i]], las[a[i]] = i;
    }
    cout << ans << "\n";
}

