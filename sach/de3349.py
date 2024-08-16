//DE3349.PY - Tran Huu Nam - hsgtin.vn - 2024
import math
def luythua(a, b):
    if b == 0:
        return 1
    p = luythua(a, b // 2)
    if b % 2 == 0:
        return p * p
    else:
        return p * p * a
def main():
    p = input()
    n = len(p)
    a = [int(p[n-1-i]) for i in range(n)]
    C = [[0] * (n + 1) for _ in range(n + 1)]
    s = 0
    for i in range(n):
        C[i][0] = 1
        for j in range(1, i + 1):
            C[i][j] = C[i - 1][j] + C[i - 1][j - 1]
        t = 0
        for x in range(i + 1):
            t += C[i][x] * luythua(10, x)
        s += t * a[i] * (1 << (n - i - 1))
    print(s)
if __name__ == "__main__":
    main()

