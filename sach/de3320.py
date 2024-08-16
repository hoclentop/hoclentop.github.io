//DE3320.PY - Tran Huu Nam - hsgtin.vn - 2024
import numpy as np
def main():
    m, n = map(int, input().split())
    a = np.zeros((401, 401), dtype=int)
    D = np.zeros((401, 401), dtype=int)
    for i in range(1, m + 1):
        for j in range(1, n + 1):
            a[i][j] = int(input())
    C = [0] * 1000001
    Smax = 0
    for x2 in range(1, m + 1):
        C = [0] * 1000001
        for y2 in range(1, n + 1):
            z = a[x2][y2]
            D[x2][y2] = max(D[x2][y2], D[x2][y2 - 1], C[z] + 1)
            C[z] = y2
            S = (y2 + 1 - D[x2][y2]) * 1
            if S > Smax:
                Smax = S
    C = [0] * 1000001
    for x1 in range(m - 1, 0, -1):
        for x2 in range(x1 + 1, m + 1):
            for y2 in range(n, 0, -1):
                z = a[x2][y2]
                if C[z] > 0:
                    D[x2][C[z]] = max(D[x2][C[z]], y2 + 1)
                C[a[x1][y2]] = y2
            for y2 in range(1, n + 1):
                C[a[x1][y2]] = 0
            for y2 in range(1, n + 1):
                C[a[x1][y2]] = y2
                z = a[x2][y2]
                D[x2][y2] = max(D[x2][y2], D[x2][y2 - 1], D[x2 - 1][y2], C[z] + 1)
                S = (x2 + 1 - x1) * (y2 + 1 - D[x2][y2])
                if S > Smax:
                    Smax = S
            for y2 in range(1, n + 1):
                C[a[x1][y2]] = 0
    print(Smax)
if __name__ == "__main__":
    main()

