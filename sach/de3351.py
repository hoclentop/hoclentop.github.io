//DE3351.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
from collections import defaultdict
input = sys.stdin.read
data = input().split()
n = int(data[0])
s = data[1]
F = [0] * (n + 1)
for i in range(n):
    F[i + 1] = F[i] + (1 if s[i] == 'a' else -1)
C = defaultdict(int)
for i in range(n + 1):
    C[F[i] + n] += 1
Dem = 0
for x in C.values():
    Dem += x * (x - 1) // 2
print(Dem)

