//DE3326.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
n = 0
C = [0] * 1000001
s = ""
def dem(x, y):
    cmin = 10000000
    v = 0
    H = -10000000
    C[0] = 0
    for i in range(1, n + 1):
        if s[i - 1] == x:
            C[i] = C[i - 1] + 1
        elif s[i - 1] == y:
            C[i] = C[i - 1] - 1
        else:
            C[i] = C[i - 1]
        if s[i - 1] == y:
            while v < i:
                cmin = min(cmin, C[v])
                v += 1
        if cmin < 10000000:
            H = max(H, C[i] - cmin)
    return H
def tim(x):
    hmax = 0
    for y in range(ord('a'), ord('z') + 1):
        if x != chr(y):
            hmax = max(hmax, dem(x, chr(y)))
    return hmax
def main():
    global n, s
    input = sys.stdin.read
    data = input().split()
    n = int(data[0])
    s = data[1]
    dmax = 0
    for x in range(ord('a'), ord('z') + 1):
        dmax = max(dmax, tim(chr(x)))
    print(dmax)
if __name__ == "__main__":
    main()

