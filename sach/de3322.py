//DE3322.PY - Tran Huu Nam - hsgtin.vn - 2024
N = int(10**6+1)
def sangso():
    k = int(N**0.5) + 1
    c[0] = c[1] = 0
    for i in range(2,k+1):
        if c[i] == 1:
            for j in range(i*i,N+1,i):
                c[j] = 0
n = int(input())
a = list(map(int, input().split()))
c = [1] * (N+3)
dmin = 10000000
sangso()
j = -10000000
for i in range(n):
    if c[a[i]] == 1:
        dmin = min(dmin,i - j + 1)
        j = i
if dmin == 10000000:
    print(-1)
else:
    print(dmin)

