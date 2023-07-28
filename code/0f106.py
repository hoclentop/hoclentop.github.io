from math import sqrt
xA, yA = [int(x) for x in input().split()]
xB, yB = [int(x) for x in input().split()]
xC, yC = [int(x) for x in input().split()]
def kc(x1, x2, y1, y2):
  d = sqrt((x2 - x1)**2 + (y2 - y1)**2)
  return d
d1 = kc(xA, xB, yA, yB)
d2 = kc(xB, xC, yB, yC)
d3 = kc(xA, xC, yA, yC)
if (d1 + d2 == d3) or (d1 + d3 == d2) or (d3 + d2 == d1):
  print('YES' )
else:
  print('NO')