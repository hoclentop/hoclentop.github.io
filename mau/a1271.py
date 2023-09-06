n=int(input())
a = [int(x) for x in input().split()]
dmax = 0
d = 1
for i in range(1,n):
    if a[i]>a[i-1]: 
        d += 1
    else:
        if d > dmax:
            dmax = d
            v = i - d
        d = 1
if d > dmax:
    dmax = d
    v = n - d
for i in range(v, v+dmax):
    print(a[i], end=" ")
    
    
