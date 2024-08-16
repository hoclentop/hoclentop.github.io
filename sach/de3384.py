//DE3384.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
input = sys.stdin.read
data = input().split()
n = int(data[0])
a = [0] * (n + 1)
b = [0] * (1000001)
m = [0] * (1000001)
mx = 0
for i in range(1, n + 1):
    a[i] = int(data[i])
    if mx < a[i]:
        mx = a[i]
for x in range(2, mx + 1):
    b[x] = x
for x in range(2, mx + 1):
    for y in range(x * x, mx + 1, x):
        b[y] = min(b[y], x)
for i in range(1, n + 1):
    x = a[i]
    while x > 1:
        p = b[x]
        m[p] += 1
        x //= p
T = 1
for x in range(2, mx + 1):
    T = T * (m[x] + 1) % 1000000007
print(T)

