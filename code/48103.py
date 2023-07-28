import math
a, b, c, d = [int(x) for x in input().split()]
def hd(x, y):
  tam = x
  x = y 
  y = tam
if a> b:
  hd(a,b)
if b> c:
  hd(b,c)
if c > d:
  c = d 
k = max(a, max(b,c))
print(k)