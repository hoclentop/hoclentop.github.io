//DE3397.PY - Tran Huu Nam - hsgtin.vn - 2024
import numpy as np
N = 101
a = np.zeros((N, N), dtype=int)
vs = np.zeros(N, dtype=int)
x = np.zeros(N, dtype=int)
y = np.zeros(N, dtype=int)
n = 0
def tim(i):
    if vs[i]:
        return False
    vs[i] = 1
    for j in range(1, n + 1):
        if a[i][j]:
            if y[j] == 0:
                x[i] = j
                y[j] = i
                return True
            if tim(y[j]):
                x[i] = j
                y[j] = i
                return True
    return False
def cal():
    cnt = 0
    for i in range(1, n + 1):
        vs.fill(0)
        if tim(i):
            cnt += 1
    return cnt
def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    index = 0
    n = int(data[index])
    index += 1
    edge = []
    for i in range(1, n + 1):
        for j in range(1, n + 1):
            edge.append((int(data[index]), i, j))
            index += 1
    edge.sort()
    l, r = 0, len(edge) - 1
    ans = 0
    while l <= r:
        a.fill(0)
        x.fill(0)
        y.fill(0)
        m = (l + r) // 2
        for j in range(m + 1):
            a[edge[j][1]][edge[j][2]] = 1
        if cal() == n:
            ans = edge[m][0]
            r = m - 1
        else:
            l = m + 1
    print(ans)
if __name__ == "__main__":
    main()

