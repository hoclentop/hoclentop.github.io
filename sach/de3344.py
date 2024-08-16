//DE3344.PY - Tran Huu Nam - hsgtin.vn - 2024
import math
def main():
    s, p = "", ""
    n, k, a, t, nho = 0, 0, 0, 0, 0
    n = int(input())
    k = int(input())
    s = input()
    p = s
    while k > 1:
        t += 1
        k //= 2
    q = '0' * t
    p = p + q
    s = q + s
    q = p
    for i in range(t + n - 1, -1, -1):
        a = ord(s[i]) - ord('0') + nho + ord(p[i]) - ord('0')
        q = q[:i] + str(a % 2) + q[i+1:]
        nho = a // 2
    if nho > 0:
        q = '1' + q
    print(q)
if __name__ == "__main__":
    main()

