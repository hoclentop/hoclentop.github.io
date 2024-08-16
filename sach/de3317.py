//DE3317.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
import math
# Constants
INF = 1e18
N = int(2e6) + 1
# Initialize variables
n = 0
m = -INF
a = [0] * N
D = [0] * N
B = [0] * N
# Input reading
input = sys.stdin.read
data = input().split()
# Parse input
n = int(data[0])
for i in range(1, n + 1):
    a[i] = int(data[i])
    m = max(m, a[i])
    D[a[i]] += 1
# Calculate B array
for x in range(1, int(m) + 1):
    for y in range(x, int(m) + 1, x):
        B[x] += D[y]
# Calculate T
T = 0
for x in range(2, int(m) + 1):
    T = max(T, x * B[x])
# Output result
print(T)

