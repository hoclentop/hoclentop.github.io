//DE3332.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
from collections import defaultdict
N = 100001
n, m, p = 0, 0, 0
P = [0] * N
C = [0] * N
ke = defaultdict(list)
def dfs(u, y):
    P[u] = y
    C[y] += 1
    for v in ke[u]:
        if P[v] == 0:
            dfs(v, y)
def main():
    input = sys.stdin.read
    data = input().split()
    index = 0
    n = int(data[index])
    index += 1
    m = int(data[index])
    index += 1
    for _ in range(m):
        x = int(data[index])
        index += 1
        y = int(data[index])
        index += 1
        ke[x].append(y)
        ke[y].append(x)
    for i in range(1, n + 1):
        if P[i] == 0:
            p += 1
            dfs(i, p)
    v = 2
    for i in range(3, p + 1):
        if C[i] > C[v]:
            v = i
    print(C[1] + C[v])
if __name__ == "__main__":
    main()

