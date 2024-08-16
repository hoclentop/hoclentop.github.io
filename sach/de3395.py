//DE3395.PY - Tran Huu Nam - hsgtin.vn - 2024
import math
n = 0
x = [0] * 100
p = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31]
kq = 1e18
def luythua(a, n):
    t = 1
    for i in range(1, n + 1):
        t *= a
    return t
def xuli(k):
    s = 1
    for i in range(1, k):
        s *= luythua(p[i - 1], x[i] - 1)
    global kq
    if s < kq:
        kq = s
def thu(k, n, g):
    if n == 1:
        xuli(k)
        return
    for v in range(2, min(n, g) + 1):
        if n % v == 0:
            x[k] = v
            thu(k + 1, n // v, v)
if __name__ == "__main__":
    n = int(input())
    thu(1, n, n)
    print(kq)

