//DE3305.PY - Tran Huu Nam - hsgtin.vn - 2024
import math
BC = [0] * 101
a, b = 0, 0
def nen(n):
    for i in range(2, 61):
        if n % i != 0:
            return i
def donen(n):
    if n == 2:
        return 0
    return donen(nen(n)) + 1
def bcnn(a, b):
    return a // math.gcd(a, b) * b
def C(k, n):
    return n // BC[k - 1] - n // BC[k]
def D(n):
    s = 0
    for k in range(2, 61):
        s += (donen(k) + 1) * C(k, n)
    return s
BC[1] = 1
for i in range(2, 61):
    BC[i] = bcnn(BC[i - 1], i)
a, b = map(int, input().split())
print(D(b) - D(a - 1))

