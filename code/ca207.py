import math
n = int(input()) 
dem = 0
m = math.sqrt(n)
for a in range(int(m), 0, -1):
  if n % a == 0:
    print(a, n//a)