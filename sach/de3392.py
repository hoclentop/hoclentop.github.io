//DE3392.PY - Tran Huu Nam - hsgtin.vn - 2024
import bisect
from typing import List
m, n, s = 0, 0, 0
a: List[List[int]] = []
def sub1(a: List[int], b: List[int]) -> None:
    result = 0
    b.sort()
    for x in a:
        u = bisect.bisect_left(b, s - x)
        v = bisect.bisect_right(b, s - x)
        result += v - u
    print(result)
def sub2() -> None:
    b, c = [], []
    for i in range(n):
        for j in range(n):
            b.append(a[0][i] + a[1][j])
    for i in range(n):
        for j in range(n):
            c.append(a[2][i] + a[3][j])
    sub1(b, c)
def sub3() -> None:
    b, c = [], []
    for i in range(n):
        for j in range(n):
            for k in range(n):
                b.append(a[2][i] + a[3][j] + a[4][k])
    for i in range(n):
        for j in range(n):
            c.append(a[0][i] + a[1][j])
    sub1(c, b)
def main() -> None:
    global m, n, s, a
    m, n, s = map(int, input().split())
    a = [[0] * n for _ in range(m)]
    for i in range(m):
        a[i] = list(map(int, input().split()))
    if m == 2:
        sub1(a[0], a[1])
    elif m == 4:
        sub2()
    else:
        sub3()
if __name__ == "__main__":
    main()

