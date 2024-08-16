//DE3366.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
n, k = map(int, input().split())
s = input().strip()
s += s
f = [[[[False] * (2 * n + 1) for _ in range(101)] for _ in range(k)] for _ in range(k)]
for d in range(n):
    for i in range(2 * n - d):
        j = i + d
        for x in range(k):
            for y in range(k):
                x2 = x + (s[i] == 'B')
                if x2 < k and not f[y][x2][i + 1][j]:
                    f[x][y][i][j] = True
                x2 = x + (s[j] == 'B')
                if x2 < k and not f[y][x2][i][j - 1]:
                    f[x][y][i][j] = True
dem = 0
for i in range(n):
    if f[0][0][i][i + n - 1]:
        dem += 1
print(dem)

