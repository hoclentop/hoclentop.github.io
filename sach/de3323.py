//DE3323.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
from typing import List
N = 2001
M = 10**9 + 7
def main():
    input = sys.stdin.read
    data = input().split()
    m = int(data[0])
    n = int(data[1])
    d = int(data[2])
    k = int(data[3])
    x = ["" for _ in range(m + 1)]
    C = [[0 for _ in range(n + 1)] for _ in range(m + 1)]
    idx = 4
    for i in range(1, m + 1):
        x[i] = data[idx]
        idx += 1
        for j in range(1, n + 1):
            if x[i][j - 1] == 'M':
                C[i][j] = 1
    for i in range(1, m + 1):
        for j in range(1, n + 1):
            C[i][j] += C[i - 1][j] + C[i][j - 1] - C[i - 1][j - 1]
    dem = 0
    for i in range(1, m + 1):
        for j in range(1, n + 1):
            if x[i][j - 1] == 'P':
                a = max(i - d, 1)
                b = max(j - d, 1)
                c = min(i + d, m)
                e = min(j + d, n)
                S = C[c][e] - C[c][b - 1] - C[a - 1][e] + C[a - 1][b - 1]
                if S >= k:
                    dem += 1
    print(dem)
if __name__ == "__main__":
    main()

