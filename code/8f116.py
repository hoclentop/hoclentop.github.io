import math
a, b, c = [int(x) for x in  input().split()]
m = min(a, min(b,c))
n = max(a, max(b,c))
print(m, n)