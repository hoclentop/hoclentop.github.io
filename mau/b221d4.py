import sys
sys.stdin = open("hcn.inp","r")
sys.stdout = open("hcn.out","w")
m, n, k = [int(x) for x in input().split()]
a = []
b = [0]*1001
for i in range(k):
    a.append(tuple([int(x) for x in input().split()]))
a.append((0,0))
a.append((m+1,n+1))
a.sort()
smax = 0
k+=2
for i in range(k-2):
    b[0] = 0 
    b[1] = a[i+1][1]
    b[2] = n+1
    p = 3
    for j in range(i+2, k):
        ymax = 0 
        for t in range(p-2):
            ymax = max(ymax, b[t+2] - b[t] - 1)
        smax = max(smax, ymax * (a[j][0] - a[i][0] - 1))
        t = p-1;
        while b[t] >= a[j][1]:
            b[t+1] = b[t] 
            t-=1 
        b[t+1] = a[j][1]
        p+=1 
print(smax)
