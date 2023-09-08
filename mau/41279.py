n = int(input())
a = [int(x) for x in input().split()]
for k in range(1, n+1):
    ok = True
    for i in range(n-k):
        if a[i]!=a[i+k]:
            ok = False
    if ok:
        print(k)
        break
