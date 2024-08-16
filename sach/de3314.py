//DE3314.PY - Tran Huu Nam - hsgtin.vn - 2024
import itertools
from collections import defaultdict
MOD = 1000000007
MAX_N = 1000
C = [[0] * (MAX_N + 1) for _ in range(MAX_N + 1)]
F = [[0] * (MAX_N + 1) for _ in range(MAX_N + 1)]
def tg_pascal(n):
    for i in range(n + 1):
        C[i][0] = 1
        for j in range(1, i + 1):
            C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % MOD
def main():
    n, k = map(int, input().split())
    kq = defaultdict(int)
    for _ in range(n):
        s = input()
        s = ''.join(sorted(s))
        kq[s] += 1
    a = list(kq.values())
    l = max(a)
    tg_pascal(l)
    F[0][0] = 1
    n = len(a)
    for i in range(1, n + 1):
        for j in range(k + 1):
            for m in range(a[i - 1] + 1):
                x = m * (m - 1) // 2
                if j < x:
                    break
                F[i][j] += (F[i - 1][j - x] * C[a[i - 1]][m]) % MOD
                F[i][j] %= MOD
    print(F[n][k])
if __name__ == "__main__":
    main()

