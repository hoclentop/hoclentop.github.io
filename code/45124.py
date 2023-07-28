a, b, c, d = [int(x) for x in input().split()]
def hdoi(x, y):
  tam = x 
  x = y 
  y = tam 
if a > b:
  hdoi(a, b)
if b > c:
  hdoi(b, c)
if c > d:
  hdoi(c, d)
if a > b:
  hdoi(a, b)
if b > c:
  hdoi(b, c)
if a > b:
  hdoi(a, b)
if (a == b) or (b == d):
  print(b)
else:
  if (c == d) or (b==c) :
    print(c)
  else:
    if (a==b):
      print(b)
    else:
      print(d)