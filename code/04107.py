import math
n = int(input())
for x in range(1, n ):
  for y in range(x + 1, n):
    k = x*x + y *y
    z = int(math.sqrt(k))
    if (z*z == k) and (z <= n):
      print(x, y, z)