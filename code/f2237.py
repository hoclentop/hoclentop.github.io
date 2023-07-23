n = int(input())
a = [int(x) for x in input().split()]
k = int(input())
dmax=-1
for i in range(n):
    if a[i]<=k and a[i]>dmax:
        dmax=a[i]
print(dmax)
