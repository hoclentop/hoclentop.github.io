//DE3319.PY - Tran Huu Nam - hsgtin.vn - 2024
import numpy as np
from collections import defaultdict
C = defaultdict(set)
B = []
a = np.zeros((401, 401), dtype=int)
D = np.zeros(401, dtype=int)
def main():
    global m, n
    x1, y1, x2, y2, i, j = 0, 0, 0, 0, 0, 0
    S, Smax, z, yc, yn = 0, 0, 0, 0, 0
    m, n = map(int, input().split())
    for i in range(1, m + 1):
        for j in range(1, n + 1):
            a[i][j] = int(input())
    for x1 in range(1, m + 1):
        B.clear()
        D.fill(0)
        for x2 in range(x1, m + 1):
            for y2 in range(1, n + 1):
                z = a[x2][y2]
                yn = 0
                if len(C[z]) == 0:
                    yc = 0
                else:
                    si = next((y for y in C[z] if y > y2), None)
                    if si is None:
                        yc = 0
                    else:
                        yc = max(C[z] if C[z] else [0])
                    if si is not None:
                        yn = si
                D[y2] = max(D[y2], yc + 1, D[y2 - 1])
                if yn > 0:
                    D[yn] = max(D[yn], y2 + 1)
                C[z].add(y2)
                S = (x2 + 1 - x1) * (y2 + 1 - D[y2])
                if S > Smax:
                    Smax = S
                if len(C[z]) == 1:
                    B.append(z)
        for z in B:
            C[z].clear()
    print(Smax)
if __name__ == "__main__":
    main()

