import math
n = int(input()) 
dem = 0
m = math.sqrt(n)
for a in range(1, int(m) + 1):
  if n % a == 0:
    dem = dem + 1 
print(dem)