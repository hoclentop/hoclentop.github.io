//DE3394.PY - Tran Huu Nam - hsgtin.vn - 2024
import math
def is_prime(x):
    if x < 2:
        return False
    for i in range(2, int(math.sqrt(x)) + 1):
        if x % i == 0:
            return False
    return True
n = int(input())
T = 0
for _ in range(n):
    a = int(input())
    if is_prime(a):
        T += a
print(T)

