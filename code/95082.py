from math import sqrt
xA, yA = [int(x) for x in  input().split()]
xB, yB = [int(x) for x in  input().split()]
xC, yC = [int(x) for x in  input().split()]
def kc(x1, x2, y1, y2):
  d = sqrt((x2 -x1)**2 + (y2-y1)**2)
  return d
a = kc(xA,xC, yA, yC)
b = kc(xB, xC,yB, yC)
c = kc(xA, xB, yA, yB)
p = (a + b + c)/2
s = sqrt(p*(p - a)*(p -b)*(p-c))
print("%.1f" % s)