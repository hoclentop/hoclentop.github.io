//DE3352.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
from collections import defaultdict, deque
K = [[] for _ in range(100001)]
H = [defaultdict(int) for _ in range(100001)]
M = [0] * 100001
a = [0] * 100001
n = 0
def DFS(u):
    H[u][a[u]] += 1
    for v in K[u]:
        DFS(v)
        for x in H[v]:
            H[u][x] += H[v][x]
        H[v].clear()
    dem = 0
    tong = 0
    for x in H[u]:
        if H[u][x] > dem:
            dem = H[u][x]
            tong = 0
        if H[u][x] == dem:
            tong += x
    M[u] = tong
def main():
    global n
    input = sys.stdin.read
    data = input().split()
    index = 0
    n = int(data[index])
    index += 1
    for i in range(1, n + 1):
        a[i] = int(data[index])
        index += 1
    for i in range(1, n):
        u = int(data[index])
        v = int(data[index + 1])
        index += 2
        K[u].append(v)
    DFS(1)
    for u in range(1, n + 1):
        print(M[u], end=" ")
if __name__ == "__main__":
    main()

