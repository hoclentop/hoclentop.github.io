//DE3377.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
from collections import namedtuple
input = sys.stdin.read
data = input().split()
it = iter(data)
def next_int():
    return int(next(it))
N = 100001
Canh = namedtuple('Canh', ['u', 'v', 'w', 'id'])
Q = [None] * N
edge = [None] * N
par = [0] * N
sz = [0] * N
ans = [0] * N
def findroot(u):
    if par[u] == u:
        return u
    par[u] = findroot(par[u])
    return par[u]
def join(u, v):
    u = findroot(u)
    v = findroot(v)
    if u == v:
        return False
    if sz[u] < sz[v]:
        u, v = v, u
    par[v] = u
    sz[u] += sz[v]
    return True
def solve():
    global n, m, q
    n = next_int()
    m = next_int()
    q = next_int()
    for i in range(1, n + 1):
        par[i] = i
        sz[i] = 1
    for i in range(1, m + 1):
        u = next_int()
        v = next_int()
        w = next_int()
        edge[i] = Canh(u, v, w, 0)
    edge[1:m+1] = sorted(edge[1:m+1], key=lambda x: x.w)
    for i in range(1, q + 1):
        u = next_int()
        w = next_int()
        Q[i] = Canh(u, 0, w, i)
    Q[1:q+1] = sorted(Q[1:q+1], key=lambda x: x.w)
    j = 1
    for i in range(1, q + 1):
        while j <= m and edge[j].w <= Q[i].w:
            join(edge[j].u, edge[j].v)
            j += 1
        ans[Q[i].id] = sz[findroot(Q[i].u)]
    for i in range(1, q + 1):
        print(ans[i])
def main():
    t = next_int()
    while t > 0:
        solve()
        t -= 1
if __name__ == "__main__":
    main()

