//DE3370.Py - Tran Huu Nam - hsgtin.vn - 2024
import math
from bisect import bisect_left, bisect_right
def int2str(n):
    p = ""
    while n > 0:
        p = chr(n % 10 + 48) + p
        n //= 10
    if len(p) == 0:
        p = "0"
    return p
def str2int(s):
    n = 0
    for c in s:
        n = n * 10 + ord(c) - 48
    return n
def nummin(scs):
    if scs == 1:
        return 0
    p = '0' * scs
    p = '1' + p[1:]
    return str2int(p)
def nummax(scs):
    return nummin(scs + 1) - 1
def findmin(a, b):
    xa = int2str(a)
    xb = int2str(b)
    na = len(xa)
    nb = len(xb)
    if na >= nb:
        return 0
    c = str2int(xb[:na])
    d = str2int(xb[na:])
    if a == c:
        return max(d, nummin(nb - na))
    if a > c:
        return nummin(nb - na)
    return nummin(nb - na + 1)
def findmax(a, b):
    return findmin(a, b + 1) - 1
def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    t = int(data[0])
    index = 1
    results = []
    for _ in range(t):
        n = int(data[index])
        L = int(data[index + 1])
        R = int(data[index + 2])
        a = list(map(int, data[index + 3:index + 3 + n]))
        index += 3 + n
        a.sort()
        dem = 0
        for i in range(n):
            x = findmin(a[i], L)
            y = findmax(a[i], R)
            u = bisect_left(a, x)
            if u < n:
                v = bisect_right(a, y)
                dem += v - u
        results.append(dem)
    for result in results:
        print(result)
if __name__ == "__main__":
    main()

