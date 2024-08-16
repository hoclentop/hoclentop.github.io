//DE3353.PY - Tran Huu Nam - hsgtin.vn - 2024
import heapq
class CANH:
    def __init__(self, cuoi, len, cam):
        self.cuoi = cuoi
        self.len = len
        self.cam = cam
D = [100000000] * 1001
K = [[] for _ in range(1001)]
n, m, s, t, k, c = map(int, input().split())
w = [0] * 1001
for i in range(1, c + 1):
    w[i] = int(input())
for i in range(1, m + 1):
    u, v, l = map(int, input().split())
    K[u].append(CANH(v, l, 0))
    K[v].append(CANH(u, l, 0))
z = 0
for i in range(1, c):
    u = w[i]
    v = w[i + 1]
    for j in range(len(K[u])):
        if K[u][j].cuoi == v:
            K[u][j].cam = z
            break
    for j in range(len(K[v])):
        if K[v][j].cuoi == u:
            K[v][j].cam = z
            break
    z += K[v][j].len
D[s] = k
Q = [(k, s)]
while Q:
    du, u = heapq.heappop(Q)
    if du != D[u]:
        continue
    for i in range(len(K[u])):
        h = K[u][i]
        v = h.cuoi
        if h.cam > 0 and h.cam <= du and du <= h.cam + h.len:
            dv = h.cam + 2 * h.len
        else:
            dv = du + h.len
        if D[v] > dv:
            D[v] = dv
            heapq.heappush(Q, (dv, v))
print(D[t] - k)

