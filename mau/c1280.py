n = int(input())
a = [int(x) for x in input().split()]
for i in range(n-1):
    for j in range(i+1,n):
        if a[i]>a[j]:
            a[i],a[j] = a[j], a[i]

ok = True
for i in range(n-1):
    if a[i]+1!=a[i+1]:
        ok = False
if ok:
    print("YES")
else:
    print("NO")
    
