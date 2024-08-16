//DE3345.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
n = int(sys.stdin.readline().strip())
F = [0] * 100001
F[0] = 1
F[1] = 3
for i in range(2, n + 1):
    F[i] = (F[i - 1] + F[i - 2]) * 2 % 1000000007
print(F[n])

