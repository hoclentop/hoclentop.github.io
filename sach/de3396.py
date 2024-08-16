//DE3396.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
n, m = map(int, input().split())
c = [0] * (n + 1)
p = [0] * (n + 1)
F = [[0] * (m + 1) for _ in range(n + 1)]
for i in range(1, n + 1):
    c[i], p[i] = map(int, input().split())
fmax = 0
y = 0
for i in range(1, n + 1):
    for j in range(1, m + 1):
        F[i][j] = F[i - 1][j]
        if j >= c[i]:
            F[i][j] = max(F[i][j], F[i - 1][j - c[i]] + p[i])
        if fmax < F[i][j]:
            fmax = F[i][j]
            y = j
cmax = y
print(fmax)
x = n
result = []
while x >= 1:
    if y >= c[x] and F[x][y] == F[x - 1][y - c[x]] + p[x]:
        result.append(x)
        y -= c[x]
    x -= 1
print(" ".join(map(str, result)))
print(cmax)

