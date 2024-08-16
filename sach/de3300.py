//DE3300.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
from bisect import bisect_right
INF = 2e18
class DIEM:
    def __init__(self, a, b):
        self.a = a
        self.b = b
    def __lt__(self, other):
        return self.a < other.a
def main():
    input = sys.stdin.read
    data = input().split()
    idx = 0
    n = int(data[idx])
    m = int(data[idx + 1])
    c = int(data[idx + 2])
    idx += 3
    p = [None] * (n + 1)
    a = []
    for i in range(1, n + 1):
        p[i] = DIEM(int(data[idx]), int(data[idx + 1]))
        a.append(p[i].a)
        idx += 2
    p = sorted(p[1:], key=lambda x: x.a)
    a.sort()
    L = [INF] * (n + 1)
    L[0] = INF
    for i in range(1, n + 1):
        L[i] = min(L[i - 1], p[i - 1].b - p[i - 1].a * c)
    R = [INF] * (n + 2)
    R[n + 1] = INF
    for i in range(n, 0, -1):
        R[i] = min(R[i + 1], p[i - 1].b + p[i - 1].a * c)
    for i in range(m):
        d = int(data[idx])
        idx += 1
        k = bisect_right(a, d)
        answer = INF
        if k > 0:
            answer = min(answer, d * c + L[k])
        if k + 1 <= n:
            answer = min(answer, -d * c + R[k + 1])
        print(answer)
if __name__ == "__main__":
    main()

