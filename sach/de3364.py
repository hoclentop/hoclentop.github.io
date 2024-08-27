import sys

n, q = map(int, sys.stdin.readline().split())
a = list(map(int, sys.stdin.readline().split()))

for j in range(q):
    k = int(sys.stdin.readline().strip())
    d = dmax = 0
    for i in range(n):
        if a[i] <= k:
            d += 1
            if d > dmax:
                dmax = d
        else:
            d = 0
    print(dmax)

