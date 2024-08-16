//DE3308.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
n = int(input())
dem = 0
a = [0] * (n + 1)
b = [0] * (n + 1)
for i in range(1, n + 1):
    b[i] = int(input())
for i in range(1, n + 1):
    a[i] = int(input())
a[1:n + 1] = sorted(a[1:n + 1])
b[1:n + 1] = sorted(b[1:n + 1])
j = 1
for i in range(1, n + 1):
    if b[i] > a[j]:
        dem += 1
        j += 1
print(dem)

