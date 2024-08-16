//DE3374.CPP - Tran Huu Nam - hsgtin.vn - 2024
#include <bits/stdc++.h>
using namespace std;
long long k,c,d,x,y,z,n,m,val; int i,j;
long long a[100001];
struct Node{
    long long lazy,val,dem;
};
Node st[400005];
void down(int id) {
    long long t=st[id].lazy;
    st[id*2].lazy+=t;
    st[id*2+1].lazy+=t;
    st[id*2].val+=st[id*2].dem*t;
    st[id*2+1].val+=st[id*2+1].dem*t;
    st[id].lazy=0;
}
void buildtree(int id,int l,int r){
    if (l==r){
        st[id].val=a[l];
        st[id].dem=1;
        return;
    }
    int mid=(l+r)/2;
    buildtree(id*2,l,mid);
    buildtree(id*2+1,mid+1,r);
    st[id].val=st[id*2+1].val+st[id*2].val;
    st[id].dem=st[id*2].dem+st[id*2+1].dem;
}
void xoa(int id,int l,int r,int i){
    if (i<l || r<i) return;
    if (l==r){
        st[id].val=0;
        st[id].dem=0;
        return;
    }
    int mid=(l+r)/2;
    down(id);
    xoa(id*2,l,mid,i);
    xoa(id*2+1,mid+1,r,i);
    st[id].val=st[id*2+1].val+st[id*2].val;
    st[id].dem=st[id*2].dem+st[id*2+1].dem;
}
void update(int id,int l,int r,int u,int v,int val){
    if (v<l || r<u) return;
    if (u<=l && r<=v){
        st[id].lazy+=val;
        st[id].val+=val*(st[id].dem);
        return;
    }
    int mid=(l+r)/2;
    down(id);
    update(id*2,l,mid,u,v,val);
    update(id*2+1,mid+1,r,u,v,val);
    st[id].val=st[id*2+1].val+st[id*2].val;
    st[id].dem=st[id*2+1].dem+st[id*2].dem;
}
long long solve(int id,int l,int r,int u,int v,int val){
    if (v<l || r<u) return -1;
    if (l==r) return l;
    int mid=(l+r)/2;
    if (st[id*2].dem<val)
        return solve(id*2+1,mid+1,r,u,v,val-st[id*2].dem);
    else return solve(id*2,l,mid,u,v,val);
}
long long get(int id,int l,int r,int u,int v){
    if (v<l || r<u) return 0;
    if (u<=l && r<=v) return st[id].val;
    int mid=(l+r)/2;
    down(id);
    return get(id*2,l,mid,u,v)+get(id*2+1,mid+1,r,u,v);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n>>m;
    for (int i=1;i<=n;i++) cin>>a[i];
    buildtree(1,1,n);
    for (int i=1;i<=m;i++){
        cin>>z;
        if (z==1){
            cin>>x;
            x=solve(1,1,n,1,n,x);
            xoa(1,1,n,x);
        } else if (z==2){
            cin>>x>>y>>k;
            x=solve(1,1,n,1,n,x);
            y=solve(1,1,n,1,n,y);
            update(1,1,n,x,y,k);
        } else if (z==3) {
            cin>>x>>y;
            x=solve(1,1,n,1,n,x);
            y=solve(1,1,n,1,n,y);
            cout<<get(1,1,n,x,y)<<"\n";
        }
    }
}

