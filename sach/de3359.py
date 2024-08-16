//DE3359.PY - Tran Huu Nam - hsgtin.vn - 2024
import math
N, x, y = map(int, input().split())
d = math.gcd(x, y)
x //= d
print(N // x // y)

