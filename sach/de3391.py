//DE3391.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
from collections import Counter
input = sys.stdin.read
data = input().split()
n = int(data[0])
a = list(map(int, data[1:]))
sum_a = sum(a)
counter = Counter(a)
a.sort()
kq = 0
d = 1
for i in range(1, len(a)):
    if a[i] == a[i - 1]:
        d += 1
    else:
        kq = max(kq, sum_a - d * a[i - 1])
        d = 1
kq = max(kq, sum_a - d * a[-1])
print(kq)

