n=int(input())
a = [int(x) for x in input().split()]
smax = -float('inf')
for i in range(n):
    s=0
    for j in range(i,n):
        s+=a[j]
        if s > smax:
            smax=s
            v=i+1
            d=j-i+1
print(smax)
print(v)
print(d)
