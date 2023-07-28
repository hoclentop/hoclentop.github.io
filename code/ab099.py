import math
a, b = [int(x) for x in input().split()]
dem = 0
for x in range(1 , max(a,b)):
  k = x*x
  if (k > a) and (k < b):
    dem = dem + 1
print(dem)