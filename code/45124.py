a, b, c, d = [int(x) for x in input().split()]
if a > b:
  a,b = b,a
if b > c:
  b,c = c,b
if c> d:
  c,d = d,c
if a> b:
  a,b = b,a
if b > c:
  b,c = c,b
if a> b:
  a,b = b,a
print(a, b, c, d)
if (a == c) or (b == d):
  print(b)
else:
  if (c == d) or (b==c) :
    print(c)
  else:
    if (a==b):
      print(b)
    else:
      print(d)