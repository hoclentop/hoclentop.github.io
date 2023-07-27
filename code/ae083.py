from math import sqrt
xA, yA = [int(x) for x in  input().split()]
xB, yB = [int(x) for x in  input().split()]
xC, yC = [int(x) for x in  input().split()]
xD, yD = [int(x) for x in  input().split()]
def kc(x1, x2, y1, y2):
  d = sqrt((x2 -x1)**2 + (y2-y1)**2)
  return d
b = kc(xA,xC, yA, yC)
a = kc(xB, xC,yB, yC)
c = kc(xA, xB, yA, yB)
f = kc(xD, xA, yD, yA)
e = kc(xC, xD, yC, yD)
p1 = (a + b + c)/2
s1 = sqrt(p1*(p1 - a)*(p1 -b)*(p1-c))
p2 = (f + b + e)/2
s2 = sqrt(p2*(p2 - f)*(p2 -b)*(p2-e))
s = s1 + s2
print("%.1f" % s)