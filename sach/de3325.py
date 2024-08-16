//DE3325.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
from collections import defaultdict
from sortedcontainers import SortedSet
maxn = int(1e5) + 1
n = 0
Q = 0
a = [0] * maxn
g = defaultdict(list)
query = []
res = [0] * maxn
s = [SortedSet() for _ in range(maxn)]
def dfs(u, p):
    for v in g[u]:
        if v != p:
            dfs(v, u)
            if len(s[u]) < len(s[v]):
                s[u], s[v] = s[v], s[u]
            for x in s[v]:
                s[u].add(x)
    L = s[u].bisect_left(a[u])
    if L < len(s[u]):
        s[u].remove(s[u][L])
    s[u].add(a[u])
    res[u] = len(s[u])
def main():
    global n, Q
    input = sys.stdin.read
    data = input().split()
    index = 0
    n = int(data[index])
    Q = int(data[index + 1])
    index += 2
    for i in range(1, n + 1):
        a[i] = int(data[index])
        index += 1
    for i in range(1, n):
        u = int(data[index])
        g[u].append(i + 1)
        index += 1
    for q in range(Q):
        u = int(data[index])
        query.append(u)
        index += 1
    dfs(1, -1)
    for u in query:
        print(res[u])
if __name__ == "__main__":
    main()

