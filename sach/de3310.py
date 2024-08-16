//DE3310.PY - Tran Huu Nam - hsgtin.vn - 2024
import heapq
N = int(1e5 + 5)
MOD = int(1e9 + 7)
q = []
n, m, s, t, x, y, c = 0, 0, 0, 0, 0, 0, 0
D = [float('inf')] * N
Ke = [[] for _ in range(N)]
def dijkstra(s):
    global D, q
    D = [float('inf')] * N
    D[s] = 0
    heapq.heappush(q, (0, s))
    while q:
        du, u = heapq.heappop(q)
        if du > D[u]:
            continue
        if u == t:
            return
        for v, c in Ke[u]:
            if D[v] > D[u] + c:
                D[v] = D[u] + c
                heapq.heappush(q, (D[v], v))
def main():
    global n, m, s, t, x, y, c
    import sys
    input = sys.stdin.read
    data = input().split()
    idx = 0
    n = int(data[idx])
    idx += 1
    m = int(data[idx])
    idx += 1
    s = int(data[idx])
    idx += 1
    t = int(data[idx])
    idx += 1
    for _ in range(m):
        x = int(data[idx])
        idx += 1
        y = int(data[idx])
        idx += 1
        c = int(data[idx])
        idx += 1
        Ke[x].append((y, c))
        Ke[y].append((x, c))
    dijkstra(s)
    print(D[t])
if __name__ == "__main__":
    main()

