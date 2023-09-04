import sys
sys.stdin = open("chonsach.inp","r")
sys.stdout = open("chonsach.out","w")
n = int(input())
a=[]
for i in range(n):
    a.append(tuple([int(x) for x in input().split()]))
a.sort()
c = [10**9] * 200001
f=[0]*(n+1)
u=0
k=0
for i in range(n):
    while u<i and a[u][0] < a[i][0]:
        x = f[u]
        c[x] = min(c[x], a[u][1])
        u+=1 
    x = k
    while c[x]>=a[i][1] and x>0: x-=1 
    f[i] = x+1 
    k = max(k, x+1)
print(max(f))
