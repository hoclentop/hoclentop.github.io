//DE3385.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
input = sys.stdin.read
data = input().split()
index = 0
n = int(data[index])
index += 1
y = [0] * (n + 1)
c = [0] * (n + 1)
for i in range(1, n + 1):
    y[i] = int(data[index])
    c[i] = int(data[index + 1])
    index += 2
m = int(data[index])
index += 1
x = [0] * (m + 1)
v = [0] * (m + 1)
for i in range(1, m + 1):
    x[i] = int(data[index])
    v[i] = int(data[index + 1])
    index += 2
y[0] = c[0] = 0
G = [[0] * (n + 1) for _ in range(m + 1)]
for i in range(1, m + 1):
    for j in range(n + 1):
        if x[i] >= y[j]:
            G[i][j] = G[i - 1][j] + (x[i] - y[j]) * v[i]
L = [0] * (n + 1)
j = 1
for i in range(1, m + 1):
    while x[i] >= y[j] and j <= n:
        L[j] = i - 1
        j += 1
F = [[float('inf')] * (n + 1) for _ in range(m + 1)]
for i in range(1, m + 1):
    F[i][0] = G[i][0]
for i in range(1, m + 1):
    for j in range(1, n + 1):
        F[i][j] = F[i][j - 1]
        if x[i] >= y[j]:
            k = L[j]
            F[i][j] = min(F[i][j], F[k][j - 1] + c[j] + G[i][j] - G[k][j])
for i in range(1, m + 1):
    print(F[i][n], end=" ")

