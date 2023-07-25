n=int(input())
a=[int(x) for x in intput().split()]
dmax=d=0
for i in range(n):
    if a[i]%2==0:
        d+=1
        if d>dmax:
            dmax=d
            v=i-d+1
    else:
        d=0
for i in range(dmax):
    print(a[v+i],end=" ")