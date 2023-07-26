m,n = [int(x) for x in input().split()]
a=[]
for i in range(m):
    b=[int(x) for x in input().split()]
    a.append(b)
tmax=0
for i in range(m):
    for j in range(n):
        for t in range(1, min(m-i,n-j)+1):
            s=0
            for c in range(t):
                for d in range(t):
                    s+=a[i+c][j+d]
            if s==0 and t>tmax:
                tmax=t
                x=i
                y=j
print(x+1,y+1,tmax)