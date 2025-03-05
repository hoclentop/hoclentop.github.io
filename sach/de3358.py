//DE3358.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
from collections import defaultdict
P = defaultdict(list)
a = [0] * 100
n, s = 0, 0
D = [1000] * 100001
def main():
    global n, s
    for x in range(2, 1001):
        P[x].append(x)
        y = x
        p = 2
        while y >= p * p:
            if y % p == 0:
                P[x].append(x // p)
                while y % p == 0:
                    y //= p
            p += 1
        if y > 1:
            P[x].append(x // y)
    for line in sys.stdin:
        n = int(line.strip())
        t = 0
        for i in range(1, n + 1):
            a[i] = int(input().strip())
            t += a[i]
        s = int(input().strip())
        if t <= s:
            print(t, 0)
            continue
        D[0] = 0
        t = 0
        for i in range(1, n + 1):
            y = a[i]
            for x in range(t, -1, -1):
                for j in range(len(P[y])):
                    p = P[y][j]
                    if x + p <= s:
                        D[x + p] = min(D[x + p], D[x] + (j > 0))
            t = min(t + y, s)
        while D[s] == 1000:
            s -= 1
        print(s, D[s])
if __name__ == "__main__":
    main()

