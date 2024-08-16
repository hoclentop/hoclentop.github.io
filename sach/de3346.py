//DE3346.PY - Tran Huu Nam - hsgtin.vn - 2024
import bisect
n = int(input())
a = [0] * 1002
for i in range(1, n + 1):
    a[i] = int(input())
a[1:n+1] = sorted(a[1:n+1])
for i in range(1, n + 1):
    a[i] *= a[i]
dem = 0
for i in range(1, n - 1):
    for j in range(i + 1, n):
        k = a[i] + a[j]
        d = bisect.bisect_left(a[j+1:n+1], k) + j + 1
        while d <= n and a[d] == k:
            dem += 1
            d += 1
print(dem)

