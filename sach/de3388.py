//DE3388.PY - Tran Huu Nam - hsgtin.vn - 2024
m,n,p,q=[int(x) for x in input().split()]
a=[]
for i in range(m):
    b=[int(x) for x in input().split()]
    a.append(b)
b=[[0]*(n+1) for x in range(m+1)]
for i in range(m):
    for j in range(n):
        b[i+1][j+1]=b[i][j+1]+b[i+1][j]-b[i][j]+a[i][j]
smin=float('inf')
u=v=0
for i in range(p, m+1):
    for j in range(q, n+1):
        S=b[i][j]-b[i][j-q]-b[i-p][j]+b[i-p][j-q]
        if S < smin:
            smin=S
            u=i-p+1
            v=j-q+1
print(smin)
print(u,v)

