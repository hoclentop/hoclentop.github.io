import math
n = int(input())
k = int(math.sqrt(n))
if k*k < n:
  k = k + 1
print(k*k)