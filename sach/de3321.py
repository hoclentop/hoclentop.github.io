//DE3321.PY - Tran Huu Nam - hsgtin.vn - 2024
import math
# First C++ code translation
def main():
    n = int(input())
    k = n // 5
    d = n % 5
    if d > 0:
        k += 1
    if d == 4:
        k += 1
    print(k)
# Second C++ code translation
def main_second():
    P = [True] * 1000001
    P[1] = False
    for x in range(2, int(math.sqrt(1000000)) + 1):
        if P[x]:
            for y in range(x * x, 1000001, x):
                P[y] = False
    n = int(input())
    i = -n - 1
    dmin = n + 2
    for j in range(1, n + 1):
        x = int(input())
        if P[x]:
            dmin = min(dmin, j - i + 1)
            i = j
    if dmin > n:
        print(-1)
    else:
        print(dmin)

