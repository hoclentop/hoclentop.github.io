//DE3339.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
from bisect import bisect_left
input = sys.stdin.read
data = input().split()
index = 0
n = int(data[index])
index += 1
t = int(data[index])
index += 1
a = [0] * (n + 1)
b = [0] * (n + 1)
res = [0] * t
for i in range(1, n + 1):
    a[i] = int(data[index])
    index += 1
for i in range(t):
    res[i] = int(data[index])
    index += 1
a.sort()
for i in range(1, n + 1):
    b[i] = b[i - 1] + a[i] - a[i - 1] - 1
    if a[i]==a[i-1]: b[i]+=1
for i in range(t):
    if res[i] > b[n]:
        print(a[n] + res[i] - b[n])
    else:
        v = bisect_left(b, res[i])
        print(a[v] - b[v] + res[i] - 1)

