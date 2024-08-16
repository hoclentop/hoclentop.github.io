//DE3398.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
from bisect import bisect_left, bisect_right
N = 200001
n, q = map(int, input().split())
id = [0] * N
save = [[] for _ in range(N)]
for i in range(1, n + 1):
    x = int(input())
    id[x] = i
for i in range(1, N):
    for j in range(i, N, i):
        if id[j]:
            save[i].append(id[j])
        if id[i]:
            save[j].append(id[i])
for i in range(1, N):
    save[i].sort()
    save[i] = list(dict.fromkeys(save[i]))
for _ in range(q):
    l, r, d = map(int, input().split())
    u = bisect_left(save[d], l)
    v = bisect_right(save[d], r)
    print(v - u, end=" ")
print()

