from math import sqrt
xA, yA = [int(x) for x in  input().split()]
xB, yB = [int(x) for x in  input().split()]
xC, yC = [int(x) for x in  input().split()]
xM, yM = [int(x) for x in  input().split()]
def kc(x1, y1, x2, y2):
  return sqrt((x2 -x1)**2 + (y2 - y1)**2)
def dt(x1, y1, x2, y2, x3, y3):
  x = kc(x1,y1,x2,y2)
  y = kc(x1,y1,x3,y3)
  z = kc(x2,y2,x3,y3)
  p = (x + y + z)/2
  s = sqrt(p*(p - x)*(p -y)*(p-z))
  return s
s = dt(xA, yA, xB, yB, xC, yC)
s1 = dt(xA, yA, xB, yB, xM,yM)
s2 = dt(xA, yA, xC, yC, xM, yM)
s3 = dt(xB,yB, xC, yC, xM, yM)
if abs(s1 + s2 + s3 - s)<0.000001:
  print('YES')
else:
    print('NO')