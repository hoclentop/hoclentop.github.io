//DE3307.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
from collections import defaultdict
MAX = int(2e5 + 1)
n, m, k = 0, 0, 0
T = [0] * MAX
c = [0] * MAX
p = [0] * (MAX)
msk = [0] * MAX
Ke = defaultdict(list)
D = [False] * MAX
f = [float('inf')] * 10000
def input_data():
    global n, m, k
    n, k, m = map(int, sys.stdin.readline().split())
    for i in range(1, k + 1):
        u = int(sys.stdin.readline())
        T[u] = i
        p[i] = u
    for i in range(1, n + 1):
        c[i] = int(sys.stdin.readline())
    for i in range(1, m + 1):
        u, v = map(int, sys.stdin.readline().split())
        Ke[v].append(u)
def DFS(u, t):
    global D
    msk[u] |= (1 << (t - 1))
    D[u] = True
    for v in Ke[u]:
        if not D[v]:
            DFS(v, t)
def main():
    input_data()
    for i in range(1, k + 1):
        global D
        D = [False] * MAX
        DFS(p[i], i)

    for i in range(1, n + 1):
        f[msk[i]] = min(f[msk[i]], c[i])

    H = 1 << k
    for i in range(1, H):
        for j in range(1, H):
            f[i | j] = min(f[i | j], f[i] + f[j])

    print(f[H - 1])
if __name__ == "__main__":
    main()

