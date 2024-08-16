//DE3371.PY - Tran Huu Nam - hsgtin.vn - 2024
import heapq
import sys
input = sys.stdin.read
data = input().split()
idx = 0
def get_int():
    global idx
    idx += 1
    return int(data[idx])
def dijkstra(graph, start):
    n = len(graph)
    D = [float('inf')] * n
    D[start] = 0
    pq = [(0, start)]
    while pq:
        du, u = heapq.heappop(pq)
        if D[u] < du:
            continue
        for v, c in graph[u]:
            if D[v] > D[u] + c:
                D[v] = D[u] + c
                heapq.heappush(pq, (D[v], v))
    return D
def solve():
    global idx
    n = get_int()
    m = get_int()
    k = get_int()
    X = [[] for _ in range(n + 1)]
    Y = [[] for _ in range(n + 1)]
    Z = [[] for _ in range(n + 1)]
    for _ in range(m):
        u = get_int()
        v = get_int()
        w1 = get_int()
        w2 = get_int()
        Z[v].append((u, w1))
        Y[v].append((u, w2))
        X[u].append((v, w2))
    A = dijkstra(X, 1)
    B = dijkstra(Y, n)
    C = dijkstra(Z, k)
    ans = float('inf')
    for i in range(1, n + 1):
        if A[i] + C[i] <= 59:
            ans = min(ans, A[i] + B[i])
    return ans
if __name__ == "__main__":
    print(solve())

