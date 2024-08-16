//DE3380.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
m, n, q = 0, 0, 0
R = [0] * 100001
C = [0] * 100001
def phuhop(x, y):
    return R[x] == y and C[y] == x
def main():
    global m, n, q, R, C
    dem = 0
    A = [[0] * (n + 1) for _ in range(m + 1)]
    input = sys.stdin.read
    data = input().split()
    index = 0
    m = int(data[index])
    n = int(data[index + 1])
    q = int(data[index + 2])
    index += 3
    for i in range(1, m + 1):
        R[i] = 1
    for j in range(1, n + 1):
        C[j] = 1
    for i in range(1, m + 1):
        for j in range(1, n + 1):
            A[i][j] = int(data[index])
            index += 1
            if A[i][j] > A[i][R[i]]:
                R[i] = j
            if A[i][j] > A[C[j]][j]:
                C[j] = i
    for i in range(1, m + 1):
        if C[R[i]] == i:
            dem += 1
    for _ in range(q):
        x = int(data[index])
        y = int(data[index + 1])
        v = int(data[index + 2])
        index += 3
        ok = phuhop(x, y)
        y2 = R[x]
        x2 = C[y]
        if A[x2][y] < v:
            if x2 != x and phuhop(x2, y):
                dem -= 1
            C[y] = x
        if A[x][y2] < v:
            if y2 != y and phuhop(x, y2):
                dem -= 1
            R[x] = y
        A[x][y] = v
        if not ok and phuhop(x, y):
            dem += 1
        print(dem)
if __name__ == "__main__":
    main()

