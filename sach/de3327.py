//DE3327.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
from collections import defaultdict
n = 0
A = [0] * 1000002
P = defaultdict(list)
s = ""
def tim(x):
    global A, n
    A[0] = 0
    A[n + 1] = 0
    for i in range(1, n + 1):
        A[i] = A[i - 1]
        if s[i - 1] == x:
            A[i] += 1
    H = -n - 1
    cmin = n + 1
    Ci = j = t = 0
    for y in range(ord('a'), ord('z') + 1):
        if chr(y) == x or len(P[chr(y)]) == 1:
            continue
        cmin = n + 1
        for i in range(len(P[chr(y)])):
            j = P[chr(y)][i]
            Ci = A[j - 1] - i
            if cmin <= n:
                H = max(H, Ci - cmin)
            t = P[chr(y)][i - 1]
            cmin = min(cmin, A[t] - i)
    return H
def main():
    global n, s, P
    input = sys.stdin.read
    data = input().split()
    n = int(data[0])
    s = data[1]
    for i in range(n):
        P[s[i]].append(i + 1)
    for x in range(ord('a'), ord('z') + 1):
        P[chr(x)].append(n + 1)
    dmax = 0
    for x in range(ord('a'), ord('z') + 1):
        dmax = max(dmax, tim(chr(x)))
    print(dmax)
if __name__ == "__main__":
    main()

