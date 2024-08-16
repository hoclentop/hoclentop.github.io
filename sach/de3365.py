//DE3365.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
from collections import namedtuple
CANH = namedtuple('CANH', ['c', 'u', 'v'])
def findroot(u, P):
    if P[u] != u:
        P[u] = findroot(P[u], P)
    return P[u]
def xeptruoc(x, y):
    return x.c < y.c
def main():
    input = sys.stdin.read
    data = input().split()
    idx = 0
    n = int(data[idx])
    idx += 1
    q = int(data[idx])
    idx += 1
    a = [0] * (n + 1)
    for i in range(1, n + 1):
        a[i] = int(data[idx])
        idx += 1
    D = [CANH(0, 0, 0)] * (n + 1)
    for i in range(1, n + 1):
        D[i] = CANH(a[i], i, i + 1)
    C = [(0, 0)] * (q + 1)
    for i in range(1, q + 1):
        C[i] = (int(data[idx]), i)
        idx += 1
    D.sort(key=lambda x: x.c)
    C.sort()
    P = list(range(n + 2))
    H = [1] * (n + 2)
    j = 1
    maxx = 1
    B = [0] * (q + 1)
    for i in range(1, n + 1):
        while D[i].c > C[j][0] and j <= q:
            B[C[j][1]] = maxx - 1
            j += 1
        if j > q:
            break
        x = findroot(D[i].u, P)
        y = findroot(D[i].v, P)
        if x != y:
            P[x] = y
            H[y] += H[x]
            maxx = max(maxx, H[y])
    for i in range(j, q + 1):
        B[C[i][1]] = maxx - 1
    for i in range(1, q + 1):
        print(B[i])
if __name__ == "__main__":
    main()

