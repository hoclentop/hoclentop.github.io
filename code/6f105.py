import math
a, b, c = [int(x) for x in input().split()]
dt = b* b - 4 *a*c
k = math.sqrt(dt)
if dt < 0:
 print('PT VO NGHIEM')
else:
  x1 = (-b + k)/2*a 
  x2 = (-b - k)/2*a
  print("%.3f" %x1,"%.3f" %x2 )