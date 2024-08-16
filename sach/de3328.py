//DE3328.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
input = sys.stdin.read
data = input().split()
n = int(data[0])
m = int(data[1])
a = [0] * (n + 1)
b = [0] * (n + 1)
for i in range(1, n + 1):
    a[i] = int(data[i + 1])
for i in range(1, n + 1):
    b[i] = int(data[i + n + 1])
a.sort()
b.sort()
tmin = a[n] + b[n]
tmax = 0
for i in range(m, 0, -1):
    t = a[n - m + i] + b[n + 1 - i]
    if t > tmax:
        tmax = t
    if t < tmin:
        tmin = t
print(tmin, tmax - tmin)

