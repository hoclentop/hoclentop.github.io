//DE3341.PY - Tran Huu Nam - hsgtin.vn - 2024
import math
from collections import defaultdict
N = 100001
n = 0
h = [0] * N
f = [[0] * 21 for _ in range(N)]
c = [0] * N
edge = defaultdict(list)
v = []
def cmp(a, b):
    return c[a] > c[b]
def dfs(u, par):
    h[u] = h[par] + 1
    for v in edge[u]:
        if v != par:
            f[v][0] = u
            for i in range(1, 21):
                f[v][i] = f[f[v][i - 1]][i - 1]
            dfs(v, u)
def lca(a, b):
    if h[a] < h[b]:
        a, b = b, a
    k = h[a] - h[b]
    for i in range(21):
        if (k >> i) & 1:
            a = f[a][i]
    if a == b:
        return a
    k = int(math.log2(h[a]))
    for i in range(k, -1, -1):
        if f[a][i] != f[b][i]:
            a = f[a][i]
            b = f[b][i]
    return f[a][0]
def dis(a, b):
    return h[a] + h[b] - 2 * h[lca(a, b)]
def main():
    global n
    n = int(input())
    for i in range(1, n + 1):
        c[i] = int(input())
        v.append(i)
    for i in range(1, n):
        u, v_ = map(int, input().split())
        edge[u].append(v_)
        edge[v_].append(u)
    v.sort(key=lambda x: c[x], reverse=True)
    dfs(1, 1)
    a = v[0]
    b = v[0]
    ans = 0
    for i in range(1, len(v)):
        ans = max(ans, c[v[i]] * max(dis(a, v[i]), dis(b, v[i])))
        if dis(a, v[i]) > dis(b, v[i]):
            if dis(a, v[i]) > dis(a, b):
                b = v[i]
        else:
            if dis(b, v[i]) > dis(a, b):
                a = v[i]
    print(ans)
if __name__ == "__main__":
    main()

